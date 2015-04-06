#include <SPI.h>

void setup()
{
  SPI.begin();
  SPI.setBitOrder(LSBFIRST);
  SPI.setClockDivider(SPI_CLOCK_DIV8);
  SPI.setDataMode(SPI_MODE0);
  
  Serial.begin(9600);
  
}

void loop()
{
  
}
