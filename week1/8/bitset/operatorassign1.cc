#include "bitset.ih"

BitSet& BitSet::operator=(BitSet const& other)
{
  BitSet tmp(other);
  d_bits = move(tmp.d_bits);
  return *this;
}