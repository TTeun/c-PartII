#ifndef __BITMEMORY__H
#define __BITMEMORY__H

#include <iosfwd>
#include <string>

typedef unsigned long word_t;

class BitMemory
{
  size_t  d_size;
  word_t* d_data = 0;

public:
  BitMemory(size_t size);
  BitMemory(std::string const& bits); // 1
  BitMemory(BitMemory const& other);  // 2
  BitMemory(BitMemory&& rvalue);      // 3
  ~BitMemory();

  BitMemory& operator=(BitMemory&& rvalue);
  bool operator==(BitMemory const& other) const;
  BitMemory operator|(BitMemory const& lhs) const;
  BitMemory operator&(BitMemory const& lhs) const;
  BitMemory operator<<(size_t shift) const;
  BitMemory& operator|=(BitMemory const& lhs);
  BitMemory& operator&=(BitMemory const& lhs);
  BitMemory& operator<<=(size_t shift);

  class Proxy;
  Proxy operator[](size_t idx);

  void readString(std::string const& bits);
  size_t size() const;
  void resize(size_t new_size);

private:
  word_t* blockAt(size_t idx) const;
  word_t const* block(size_t idx) const;
  word_t* block(size_t idx);
  static word_t bitMaskAtIndex(size_t idx);
  static size_t requiredBlocks(size_t size);

  static size_t const s_bits_per_word = 8 * sizeof(word_t);
  friend std::ostream&
  operator<<(std::ostream& out, BitMemory const& bitMemory);
};

inline size_t BitMemory::size() const
{
  return d_size;
}

inline word_t* BitMemory::blockAt(size_t idx) const
{
  return d_data + idx / s_bits_per_word;
}

inline word_t* BitMemory::block(size_t idx)
{
  return blockAt(idx);
}

inline word_t const* BitMemory::block(size_t idx) const
{
  return blockAt(idx);
}

inline word_t BitMemory::bitMaskAtIndex(size_t idx)
{
  return (word_t{1} << (s_bits_per_word - 1 - (idx % s_bits_per_word)));
}

inline size_t BitMemory::requiredBlocks(size_t size)
{
  return 1 + size / s_bits_per_word;
}

#endif // __BITMEMORY__H
