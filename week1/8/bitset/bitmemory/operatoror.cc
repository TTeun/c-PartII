#include "bitmemory.ih"

BitMemory BitMemory::operator|(const BitMemory& lhs) const
{
  BitMemory bMem{d_size};
  for (size_t idx    = 0; idx != requiredBlocks(d_size); ++idx)
    *bMem.block(idx) = *block(idx) | *lhs.block(idx);

  return bMem;
}
