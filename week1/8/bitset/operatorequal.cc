#include "bitset.ih"

bool BitSet::operator==(BitSet const& other) const
{
  return d_bits == other.d_bits;
}
