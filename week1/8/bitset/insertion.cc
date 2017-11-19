#include "bitset.ih"

std::ostream& operator<<(std::ostream& out, BitSet const& bitSet)
{
  out << bitSet.d_bits;
  return out;
}
