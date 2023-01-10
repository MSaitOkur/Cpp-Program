#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iosfwd>

// Aggragate type
template <typename T, std::size_t size>
struct Array
{
    T ar[size];
};



#endif // ARRAY_HAPP