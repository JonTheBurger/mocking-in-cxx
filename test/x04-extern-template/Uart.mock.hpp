#pragma once

#include <gmock/gmock.h>

#include "Uart.hpp"

class MockUart {
public:
  MockUart();
  virtual ~MockUart();
  MOCK_METHOD(void, read, (uint8_t * out, uint32_t size), ());
};
