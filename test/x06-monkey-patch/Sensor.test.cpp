#include "Sensor.hpp"

#include <gtest/gtest.h>
#include <hippomocks.h>

#include "Uart.hpp"

TEST(TestSensor, Reading_is_parsed_as_little_endian)
{
  MockRepository mocks;
  mocks.OnCallFunc(uart::read)
    .Match([](uint8_t* out, uint32_t size) {
      (void)out;
      return size == 2;
    })
    .Do([](uint8_t* buf, uint32_t size) {
      (void)size;
      buf[0] = 0x34;
      buf[1] = 0x12;
    });

  Sensor sensor;

  ASSERT_EQ(0x1234, sensor.getReading());
}
