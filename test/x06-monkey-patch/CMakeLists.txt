add_executable(x06-monkey-patch
  Sensor.cpp
  Sensor.hpp
  Sensor.test.cpp
  Uart.cpp
  Uart.hpp)

target_link_libraries(x06-monkey-patch
  gmock_main
  HippoMocks)

add_test(NAME x06-monkey-patch COMMAND x06-monkey-patch)
