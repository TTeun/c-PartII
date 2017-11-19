#include "bitset.ih"

BitSet& BitSet::operator=(BitSet&& rvalue)
{
  d_bits = move(rvalue.d_bits);
  return *this;
}
