#include "bitmemory.ih"

BitMemory::BitMemory(size_t size)
    : d_size(size > 0 ? size : 1), d_data(new word_t[requiredBlocks(d_size)]())
{
}
