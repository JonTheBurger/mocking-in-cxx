#include "Sensor.hpp"

#include "Uart.hpp"

int16_t Sensor::getReading()
{
  int16_t reading;
  uart::read(reinterpret_cast<uint8_t*>(&reading), sizeof(reading));
  return reading;
}
