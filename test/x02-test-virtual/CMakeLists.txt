add_executable(x02-test-virtual
  Sensor.cpp
  Sensor.hpp
  Sensor.test.cpp
  TestVirtual.hpp
  Uart.cpp
  Uart.hpp
  Uart.mock.cpp
  Uart.mock.hpp)

target_link_libraries(x02-test-virtual
  gmock_main)

target_compile_definitions(x02-test-virtual
  PRIVATE
    -DTESTING)

add_test(NAME x02-test-virtual COMMAND x02-test-virtual)
