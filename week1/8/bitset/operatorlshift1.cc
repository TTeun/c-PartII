#include "bitset.ih"

BitSet& BitSet::operator<<=(size_t shift)
{
  d_bits <<= shift;
  return *this;
}
