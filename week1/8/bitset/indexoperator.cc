#include "bitset.ih"

BitMemory::Proxy BitSet::operator[](size_t idx)
{
  return d_bits[idx];
}
