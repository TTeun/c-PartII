#ifndef PROXY__H
#define PROXY__H

#include "bitmemory.ih"

class BitMemory::Proxy
{
public:
  Proxy(word_t* data, size_t idx) : d_idx(idx), d_data(data)
  {
  }

  operator size_t();
  Proxy& operator=(size_t rhs);

private:
  size_t  d_idx;
  word_t* d_data;
};

inline BitMemory::Proxy::operator size_t()
{
  return (*(d_data + d_idx / s_bits_per_word) &
          (1 << (d_idx % s_bits_per_word))) ?
             1 :
             0;
}

#endif
