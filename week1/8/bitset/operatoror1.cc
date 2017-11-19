#include "bitset.ih"

BitSet& BitSet::operator|=(BitSet const& lhs)
{
  d_bits = d_bits | lhs.d_bits;
  return *this;
}
