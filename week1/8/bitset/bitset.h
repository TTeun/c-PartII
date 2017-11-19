#ifndef __BITSET__H
#define __BITSET__H

#include "bitmemory/bitmemory.h"
#include <iostream>
#include <string>

std::string operator"" _bits(const char*);

class BitSet
{
  BitMemory d_bits;

public:
  explicit BitSet(size_t size = 8);
  explicit BitSet(std::string const& bits); // 1
  BitSet(BitSet const& other);              // 2
  BitSet(BitSet&& rvalue);                  // 3

  BitSet& operator=(BitSet&& rvalue);
  BitSet& operator=(BitSet const& other);
  bool operator==(BitSet const& other) const;
  BitSet operator|(BitSet const& lhs) const;
  BitSet& operator|=(BitSet const& lhs);
  BitSet operator&(BitSet const& lhs) const;
  BitSet& operator&=(BitSet const& lhs);
  BitSet operator<<(size_t shift) const;
  BitSet& operator<<=(size_t shift);

  BitMemory::Proxy operator[](size_t idx);
  size_t size() const;

  friend std::ostream& operator<<(std::ostream& out, BitSet const& bitSet);
  friend std::istream& operator>>(std::istream& in, BitSet& bitSet);
};

inline size_t BitSet::size() const
{
  return d_bits.size();
}

#endif // __BITSET__H
