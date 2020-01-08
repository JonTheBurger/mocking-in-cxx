#include "Sensor.hpp"

template <typename T>
int16_t Sensor<T>::getReading()
{
  int16_t reading;
  uart_->read(reinterpret_cast<uint8_t*>(&reading), sizeof(reading));
  return reading;
}
