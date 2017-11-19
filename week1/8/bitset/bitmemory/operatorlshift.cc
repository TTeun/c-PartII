#include "bitmemory.ih"

BitMemory BitMemory::operator<<(size_t shift) const
{
  size_t    new_size = d_size + shift;
  BitMemory bMem(new_size);
  memcpy(bMem.d_data, d_data, requiredBlocks(d_size));

  return bMem;
}
