#include "bitmemory.ih"

std::ostream& operator<<(std::ostream& out, BitMemory const& bMem)
{
  for (size_t idx = 0; idx != bMem.d_size; ++idx)
    out << (*bMem.block(idx) & BitMemory::bitMaskAtIndex(idx) ? "1" : "0");

  return out;
}
