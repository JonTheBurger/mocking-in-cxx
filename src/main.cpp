#include <iostream>

#include "Sensor.hpp"

int main() {
  Uart uart;
  Sensor sensor{&uart};

  std::cout << sensor.getReading() << std::endl;

  return 0;
}
