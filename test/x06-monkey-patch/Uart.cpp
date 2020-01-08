#include "Uart.hpp"

#include <cstdlib>

namespace uart {
void read(uint8_t* out, uint32_t size)
{
  for (uint32_t i = 0; i < size; ++i)
  {
    out[i] = rand() & 0xFF;
  }
}
}  // namespace uart
