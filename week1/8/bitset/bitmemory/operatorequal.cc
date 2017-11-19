#include "bitmemory.ih"

bool BitMemory::operator==(BitMemory const& other) const
{
  if (d_size != other.d_size)
    return false;

  for (size_t idx = 0; idx != requiredBlocks(d_size); idx++)
    if (*(d_data + idx) != *(other.d_data + idx))
      return false;

  return true;
}
