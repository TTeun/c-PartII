#include "bitmemory.ih"

BitMemory& BitMemory::operator<<=(size_t shift)
{
  BitMemory bMem{*this << shift};
  d_size = bMem.d_size;
  swap(d_data, bMem.d_data);
  return *this;
}
