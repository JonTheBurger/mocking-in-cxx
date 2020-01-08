add_executable(x03-template
  Sensor.hpp
  Sensor.test.cpp
  Uart.cpp
  Uart.hpp
  Uart.mock.cpp
  Uart.mock.hpp)

target_link_libraries(x03-template
  gmock_main)

add_test(NAME x03-template COMMAND x03-template)
