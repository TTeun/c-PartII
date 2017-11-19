#include "bitmemory.ih"

BitMemory::BitMemory(string const& bits)
    : d_size(bits.size()), d_data(new word_t[requiredBlocks(d_size)]())
{
  readString(bits);
}
