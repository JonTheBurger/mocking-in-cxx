#include <cstdlib>

#include "ProxyMock.hpp"
#include "Uart.hpp"
#include "Uart.mock.hpp"

void Uart::read(uint8_t* out, uint32_t size)
{
  return ProxyMock<MockUart>::getMockFor(this).read(out, size);
}
