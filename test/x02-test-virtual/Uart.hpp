#pragma once

#include <cstdint>

#include "TestVirtual.hpp"

class Uart {
public:
  TEST_VIRTUAL ~Uart() = default;
  TEST_VIRTUAL void read(uint8_t* out, uint32_t size);
};
