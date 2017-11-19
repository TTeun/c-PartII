#include "bitset.ih"

istream& operator>>(istream& in, BitSet& bitSet)
{
  while (in.peek() == ' ')
    in.ignore();

  string bits;
  char   ch;
  while (in.peek() == '1' || in.peek() == '0')
  {
    in.get(ch);
    bits.append(1, ch);
  }
  bitSet.d_bits.resize(bits.length());
  bitSet.d_bits.readString(bits);
  return in;
}
