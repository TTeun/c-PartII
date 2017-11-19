#include "bitmemory.ih"

BitMemory& BitMemory::operator=(BitMemory&& rvalue)
{
  d_size = rvalue.d_size;
  swap(d_data, rvalue.d_data);
  return *this;
}
