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
		SPI0_RSER |= 0b11<<24; 			// Enable EOQ interrupt flag
		SPI0_CTAR0 &= ~(0x2031203);			// Set maximum spi-clock and spi-mode 0
		SPI0_CTAR1 &= ~(0x2031203);			// Set maxmimum spi-clock and spi-mode
		SPI0_CTAR0 |= 1<<31;				// Enable double baudrate
		SPI0_CTAR1 |= 1<<31;				// Enable double baudrate
	};
	
	
	void resetBuffer(){
		this->counter = 0;
	};
	
	// This functions is called after the data that will be transmitted is written into the buffer
	void triggerDMA(){
		if(counter>0){
			//if(counter>10000) Serial.println(counter);
			SPI0_SR |= (1<<28);
			if(useBackupBuffer){
				this->backupBuffer[this->counter-1] |= 1 << 27; 				//EOQ bit in SPI0_PUSHR		
				this->transmitData.sourceBuffer(this->backupBuffer,counter*4);
				this->transmitData.enable();
				this->useBackupBuffer = false;
			}
			else{
				this->buffer[this->counter-1] |= 1 << 27; 				//EOQ bit in SPI0_PUSHR		
				this->transmitData.sourceBuffer(this->buffer,counter*4);
				this->transmitData.enable();
				this->useBackupBuffer = true;
			}
		}
	};
	
	void writeToBuffer(uint32_t d)__attribute__((always_inline)){
		if(useBackupBuffer){
			this->backupBuffer[this->counter] = d;
			this->counter++;
		}
		else{
			this->buffer[this->counter] = d;
			this->counter++;
		}
		
	};
	protected:
		int32_t counter = 0;
		bool useBackupBuffer = false;
		DMAChannel transmitData = DMAChannel(4);
		const uint32_t SPI_RESUME_TRANSACTION = 0b1 << 28; 
		const uint32_t SPI_END_TRANSACTION = 0b11 << 27;
		uint32_t buffer[27500];
		uint32_t backupBuffer[27500];
		
};




#endif