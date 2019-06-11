#ifndef TFT_DMA_INTERFACE_CPP
#define TFT_DMA_INTERFACE_CPP

#include <kinetis.h>
#include "TFT_DMA_INTERFACE.h"
//#include <DMAChannel.cpp>


void TftDmaInterface::initDMA(){
		SPI0_RSER |= 0b11<<24;
		
		this->dma1.destination((volatile uint32_t &) SPI0_PUSHR);
		this->dma1.disableOnCompletion();
		
		this->dma2.destination((volatile uint32_t &) SPI0_PUSHR);
		this->dma2.replaceSettingsOnCompletion(dma1);
		
		/*this->dma3.destination((volatile uint32_t &) SPI0_PUSHR);
		this->dma3.disableOnCompletion();
		this->dma3.replaceSettingsOnCompletion(dma1);*/
		
		
		
		
		
		
		this->transmitData.disable();
		this->transmitData.triggerAtHardwareEvent(DMAMUX_SOURCE_SPI0_TX);
	}
	
	void TftDmaInterface::setSpiForTFT(){
		SPI0_RSER |= 0b11<<24; 			// Enable EOQ interrupt flag
		SPI0_CTAR0 &= ~(0x2031203);			// Set maximum spi-clock and spi-mode 0
		SPI0_CTAR1 &= ~(0x2031203);			// Set maxmimum spi-clock and spi-mode
		SPI0_CTAR0 |= 1<<31;				// Enable double baudrate
		SPI0_CTAR1 |= 1<<31;				// Enable double baudrate
	}
	
	// This functions is called after the data that will be transmitted is written into the buffer
	void TftDmaInterface::triggerDMA(){
		if(hugeRender){
			this->transmitData = dma2;
			this->hugePicture();	
		}
		else{
			if(counter>0){
				SPI0_SR |= (1<<28);
				this->buffer[this->counter-1] |= 1 << 27; 				//EOQ bit in SPI0_PUSHR		
				this->dma1.sourceBuffer(this->buffer,counter*4);
				this->transmitData = dma1;
				this->transmitData.enable();
			}
		}
		this->counter = 0;
	}
	
	
	void TftDmaInterface::hugePicture(){
		SPI0_SR |= (1<<28);
		this->dma2.sourceBuffer(this->buffer,bufferSize*4);
		this->transmitData = dma2;
		this->backupBuffer[this->counter-1] |= 1 << 27;
		this->dma1.sourceBuffer(this->backupBuffer,counter*4);
		this->transmitData.enable();
		this->useBackupBuffer = false;
		this->hugeRender = !this->hugeRender;
		this->counter = 0;
	}
	
	void TftDmaInterface::writeToBuffer(uint32_t d){
		if(this->useBackupBuffer){
			this->backupBuffer[this->counter] = d;
			this->counter++;
			}
		else{
			if(counter < bufferSize){
				this->buffer[this->counter] = d;
				this->counter++;
			}
			else{
				this->backupBuffer[0] = d;
				this->counter = 1;
				this->useBackupBuffer = true;
				this->hugeRender = true;
			}
		}
		
	}
	


#endif