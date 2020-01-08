add_executable(x01-virtual
  Sensor.cpp
  Sensor.hpp
  Sensor.test.cpp
  Uart.cpp
  Uart.hpp
  Uart.mock.cpp
  Uart.mock.hpp)

target_link_libraries(x01-virtual
  gmock_main)

add_test(NAME x01-virtual COMMAND x01-virtual)
