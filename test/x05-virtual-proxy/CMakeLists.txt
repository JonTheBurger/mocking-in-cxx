add_executable(x05-virtual-proxy
  ProxyMock.hpp
  Sensor.cpp
  Sensor.hpp
  Sensor.test.cpp
#  Uart.cpp
  Uart.hpp
  Uart.mock.cpp
  Uart.mock.hpp
  Uart.proxy.cpp)

target_link_libraries(x05-virtual-proxy
  gmock_main)

add_test(NAME x05-virtual-proxy COMMAND x05-virtual-proxy)
