#include "Uart.mock.hpp"

MockUart::MockUart(Uart* impl)
    : ProxyMock<MockUart>{ impl }
{
}

MockUart::~MockUart() = default;
