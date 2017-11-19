#include "bitset.ih"

BitSet BitSet::operator|(const BitSet& lhs) const
{
  if (size() != lhs.size())
    return BitSet{1};

  BitSet bSet{size()};
  bSet.d_bits = d_bits | lhs.d_bits;
  return bSet;
}
