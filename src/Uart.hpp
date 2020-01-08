#pragma once

#include <cstdint>

class Uart {
public:
  void read(uint8_t* out, uint32_t size);
};
