#include "bitset.ih"

BitSet BitSet::operator<<(size_t shift) const
{
  BitSet bSet{*this};
  bSet.d_bits = (d_bits << shift);
  return bSet;
}
