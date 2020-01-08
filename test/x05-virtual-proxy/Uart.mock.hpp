#pragma once

#include <gmock/gmock.h>

#include "ProxyMock.hpp"
#include "Uart.hpp"

class MockUart : public ProxyMock<MockUart> {
public:
  MockUart(Uart* impl);
  virtual ~MockUart();
  MOCK_METHOD(void, read, (uint8_t * out, uint32_t size), ());
};
