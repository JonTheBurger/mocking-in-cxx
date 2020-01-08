#pragma once

#include "Uart.hpp"

class Sensor {
public:
  Sensor(Uart* uart)
      : uart_{ uart }
  {
  }
  int16_t getReading();

private:
  Uart* uart_;
};
