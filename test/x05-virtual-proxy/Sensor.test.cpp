#include "Sensor.hpp"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "Uart.hpp"
#include "Uart.mock.hpp"

TEST(TestTemperatureSensor, Temperature_is_parsed_as_little_endian)
{
  using namespace ::testing;
  Uart               uart;
  NiceMock<MockUart> mock_uart{ &uart };
  Sensor             sensor{ &uart };

  ON_CALL(mock_uart, read(_, 2))
    .WillByDefault(Invoke([](uint8_t* buf, uint32_t size) {
      (void)size;
      buf[0] = 0x34;
      buf[1] = 0x12;
    }));

  ASSERT_EQ(0x1234, sensor.getReading());
}
