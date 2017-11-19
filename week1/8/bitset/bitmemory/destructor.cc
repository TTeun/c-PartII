#include "bitmemory.ih"

BitMemory::~BitMemory()
{
  delete[] d_data;
}
