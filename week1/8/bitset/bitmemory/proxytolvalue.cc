#include "proxy.ih"

BitMemory::Proxy& BitMemory::Proxy::operator=(size_t rhs)
{
  if (rhs >= 2)
    return *this; // Not allowed, in future we will throw here

  word_t* block = d_data + d_idx / s_bits_per_word;
  if (rhs == 1)
    *block |= BitMemory::bitMaskAtIndex(d_idx);
  else
    *block &= ~BitMemory::bitMaskAtIndex(d_idx);

  return *this;
}
