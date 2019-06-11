#ifndef TFT_DMA_INTERFACE_H
#define TFT_DMA_INTERFACE_H

#include <Arduino.h>
#include <DMAChannel.h>




class TftDmaInterface {
	public:
		void initDMA();
		void setSpiForTFT();
		// This functions is called after the data that will be transmitted is written into the buffer
		void triggerDMA();
		void hugePicture();
		void writeToBuffer(uint32_t d);
	
	protected:
		uint32_t counter = 0;
		static const uint32_t bufferSize = 26000;
		bool useBackupBuffer = false;
		DMAChannel transmitData = DMAChannel(4);
		bool hugeRender = false;
		DMASetting dma1;
		DMASetting dma2;
		
		const uint32_t SPI_RESUME_TRANSACTION = 0b1 << 28; 
		const uint32_t SPI_END_TRANSACTION = 0b11 << 27;
		uint32_t buffer[bufferSize];
		uint32_t backupBuffer[bufferSize];
		
};




#endif