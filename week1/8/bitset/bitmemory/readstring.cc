#include "bitmemory.ih"

void BitMemory::readString(string const& bits)
{
  for (size_t idx = 0; idx != d_size; ++idx)
    if (bits[idx] == '1')
      *block(idx) |= bitMaskAtIndex(idx);
}