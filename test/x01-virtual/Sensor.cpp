#include "Sensor.hpp"

int16_t Sensor::getReading()
{
  int16_t reading;
  uart_->read(reinterpret_cast<uint8_t*>(&reading), sizeof(reading));
  return reading;
}
