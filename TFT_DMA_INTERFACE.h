#ifndef TFT_DMA_INTERFACE_H
#define TFT_DMA_INTERFACE_H

#include <Arduino.h>
#include <DMAChannel.h>




class TftDmaInterface {
	public:
	void initDMA(){
		SPI0_RSER |= 0b11<<24;
		
		this->transmitData.disable();
		this->transmitData.destination((volatile uint32_t &) SPI0_PUSHR);
		this->transmitData.triggerAtHardwareEvent(DMAMUX_SOURCE_SPI0_TX);
		this->transmitData.disableOnCompletion();
	};
	
	void setSpiForTFT(){
		SPI0_RSER |= 0b11<<24;
		SPI0_CTAR0 &= ~(0x2031203);
		SPI0_CTAR1 &= ~(0x2031203);
		SPI0_CTAR0 |= 1<<31;
		SPI0_CTAR1 |= 1<<31;
	};
	
	
	void resetBuffer(){
		this->counter = 0;
	};
	
	// This functions is called after the data that will be transmitted is written into the buffer
	void triggerDMA(){
		SPI0_SR |= (1<<28);
		this->buffer[this->counter-1] |= 1 << 27; 		
		//Serial.println(counter);		//EOQ bit in SPI0_PUSHR
		this->transmitData.sourceBuffer(this->buffer,counter*4);
		this->transmitData.enable();	
	};
	
	void writeToBuffer(uint32_t d)__attribute__((always_inline)){
		this->buffer[this->counter] = d;
		this->counter++;
	};
	protected:
		int32_t counter = 0;
		DMAChannel transmitData = DMAChannel(4);
		const uint32_t SPI_RESUME_TRANSACTION = 0b1 << 28; 
		const uint32_t SPI_END_TRANSACTION = 0b11 << 27;
		uint32_t buffer[26000];
};




#endif