add_executable(x04-extern-template
  Sensor.cpp
  Sensor.hpp
  Sensor.tpp
  Sensor.test.cpp
  Uart.cpp
  Uart.hpp
  Uart.mock.cpp
  Uart.mock.hpp)

target_link_libraries(x04-extern-template
  gmock_main)

add_test(NAME x04-extern-template COMMAND x04-extern-template)
