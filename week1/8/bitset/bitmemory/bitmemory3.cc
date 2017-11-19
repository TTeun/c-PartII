#include "bitmemory.ih"

BitMemory::BitMemory(BitMemory&& rvalue)
    : d_size(rvalue.d_size), d_data(rvalue.d_data)
{
  // We simply steal the pointer of the rvalue, so we must set it to zero so it
  // is not freed in the destructor of rvalue
  rvalue.d_data = 0;
}
