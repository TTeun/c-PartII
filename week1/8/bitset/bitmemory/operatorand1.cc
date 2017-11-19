#include "bitmemory.ih"

BitMemory &BitMemory::operator&=(BitMemory const &lhs){
  *this = *this & lhs;
  return *this;
}
