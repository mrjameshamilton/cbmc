/*******************************************************************\

Module: string hashing

Author: Daniel Kroening, kroening@kroening.com

\*******************************************************************/

/// \file
/// string hashing

#include "string_hash.h"

size_t hash_string(const std::string_view &s)
{
  return hash_string(s.data(), s.size());
}

size_t hash_string(const char *s, std::size_t len)
{
  std::size_t h = 0;

  for(; len != 0; --len)
    h=(h<<5)-h+*s;

  return h;
}
