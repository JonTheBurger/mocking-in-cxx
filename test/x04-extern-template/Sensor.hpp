#pragma once

#include "Uart.hpp"

template <typename TUart = Uart>
class Sensor {
public:
  Sensor(TUart* uart)
      : uart_{ uart }
  {
  }

  int16_t getReading();

private:
  TUart* uart_;
};
