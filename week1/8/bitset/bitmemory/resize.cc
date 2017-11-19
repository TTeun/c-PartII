#include "bitmemory.ih"

void BitMemory::resize(size_t new_size)
{
  // There might already be enough room
  if (requiredBlocks(new_size) != d_size)
  {
    delete[] d_data;
    d_size = new_size;
    d_data = new word_t[requiredBlocks(d_size)]();
  }
}