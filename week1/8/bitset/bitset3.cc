#include "bitset.ih"

BitSet::BitSet(BitSet&& rvalue) : d_bits(move(rvalue.d_bits))
{
}
