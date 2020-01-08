#pragma once

#include <cstdint>

class Uart {
public:
  virtual ~Uart() = default;
  virtual void read(uint8_t *out, uint32_t size);
};
