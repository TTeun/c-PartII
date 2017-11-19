#include "bitmemory.ih"

BitMemory::BitMemory(BitMemory const& other)
    : d_size(other.d_size), d_data(new word_t[requiredBlocks(d_size)]())
{
  // If we are here, d_data has sufficient size allocated to it, so we may
  // safely memcpy the contents into it. If not, then a bad_alloc will already
  // have been thrown.
  memcpy(d_data, other.d_data, requiredBlocks(d_size));
}
