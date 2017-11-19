#include "bitmemory.ih"

BitMemory::Proxy BitMemory::operator[](size_t idx)
{
  return Proxy(d_data, idx);
}
