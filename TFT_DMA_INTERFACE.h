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
		
		this->backupChannel.disable();
		this->backupChannel.destination((volatile uint32_t &) SPI0_PUSHR);
		this->backupChannel.triggerAtCompletionOf(this->transmitData);
		this->backupChannel.disableOnCompletion();
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
	void triggerDMA()__attribute__((always_inline)){
		
		if(hugeRender){
			this->hugePicture();
		}
		else{
			if(counter>0){
				//if(counter>10000) Serial.println(counter);
				SPI0_SR |= (1<<28);
				if(this->useBackupBuffer){
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
		}
		this->counter = 0;
	};
	
	void hugePicture()__attribute__((always_inline)){
		SPI0_SR |= (1<<28);
		if(this->useBackupBuffer){
			this->transmitData.sourceBuffer(this->buffer,27500*4);
			this->backupBuffer[this->counter-1] |= 1 << 27;
			this->backupChannel.sourceBuffer(this->backupBuffer,counter*4);
			this->transmitData.enable();
			this->backupChannel.enable();
			this->useBackupBuffer = !this->useBackupBuffer;
		}
		else{
			this->transmitData.sourceBuffer(this->backupBuffer,27500*4);
			this->buffer[this->counter-1] |= 1 << 27;
			this->backupChannel.sourceBuffer(this->buffer,counter*4);
			
			this->transmitData.enable();
			this->backupChannel.enable();
			this->useBackupBuffer = !this->useBackupBuffer;
		}
		this->hugeRender = !this->hugeRender;
	};
	
	void writeToBuffer(uint32_t d)__attribute__((always_inline)){
		if(this->useBackupBuffer){
			this->backupBuffer[this->counter] = d;
			if(counter <27500) this->counter++;
			else{
				Serial.println("inbackup");
				counter = 0;
				useBackupBuffer = !useBackupBuffer;
				hugeRender = true;
			}
		}
		else{
			this->buffer[this->counter] = d;
			if(counter <27500) this->counter++;
			else{
				Serial.println("inbuffer");
				counter = 0;
				useBackupBuffer = !useBackupBuffer;
				hugeRender = true;
			}
		}
		
	};
	protected:
		int32_t counter = 0;
		bool useBackupBuffer = false;
		bool hugeRender = false;
		DMAChannel transmitData = DMAChannel(4);
		DMAChannel backupChannel = DMAChannel(5);
		const uint32_t SPI_RESUME_TRANSACTION = 0b1 << 28; 
		const uint32_t SPI_END_TRANSACTION = 0b11 << 27;
		uint32_t buffer[27500];
		uint32_t backupBuffer[27500];
		
};




#endif