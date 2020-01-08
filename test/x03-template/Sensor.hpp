#pragma once

#include "Uart.hpp"

template <typename TUart = Uart>
class Sensor {
public:
  Sensor(TUart* uart)
      : uart_{ uart }
  {
  }

  int16_t getReading()
  {
    int16_t reading;
    uart_->read(reinterpret_cast<uint8_t*>(&reading), sizeof(reading));
    return reading;
  }

private:
  TUart* uart_;
};
