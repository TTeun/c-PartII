#include "bitset.ih"

std::string operator"" _bits(const char* bits)
{
  string str{bits};
  if (str.find_first_not_of("01") != string::npos)
    return "";

  return str;
}
