#pragma once

#include <gmock/gmock.h>

#include "Uart.hpp"

class MockUart : public Uart {
public:
  MockUart();
  ~MockUart() override;
  MOCK_METHOD(void, read, (uint8_t * out, uint32_t size), (override));
};
