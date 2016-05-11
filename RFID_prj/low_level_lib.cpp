#include "wiringPi.h"
#include "wiringPiSPI.h"
#include "low_level_lib.h"
#include <iostream>
#include <QDebug>

#define SWITCH_PIN  1
#define 1MHZ        10000000
#define SPI_SPEED   1MHZ
#define SPI_CHANNEL 0

int lib_init()
{
	return wiringPiSetup();
}

int button_init(void (*callback)(void))
{
  qDebug() << callback;

  pinMode(SWITCH_PIN, INPUT);
  pullUpDnControl (SWITCH_PIN, PUD_UP);	
	
	
  if ( wiringPiISR (SWITCH_PIN, INT_EDGE_FALLING, callback) < 0 ) {
      return 1;
  }	

  return 0;
}


int spi_init(void)
{
    return wiringPiSPISetup (SPI_CHANNEL, SPI_SPEED);
}

int spi_opertation(unsigned char *data, int len)
{
    return wiringPiSPIDataRW (SPI_CHANNEL,data, len);
}
