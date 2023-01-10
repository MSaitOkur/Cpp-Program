#ifndef MYHASH_HPP
#define MYHASH_HPP

// #include "boost/functional/hashval.h"
#include <functional>

template <typename T>
inline void hash_combine(std::size_t &seed, const T &val)
{
    seed ^= std::hash<T>()(val) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
}

// auxilary generic funcitons to create a hash value using a seed
template <typename T>
inline void hash_val(std::size_t &seed, const T &val)
{
    hash_combine(seed, val);
}

template <typename T, typename... Types>
inline void hash_val(std::size_t &seed, const T &val, const Types &...args)
{
    hash_combine(seed, val);
    hash_val(seed, args...);
}

// auxilary generic funciton to create a hash value out of a heterogeneous list of arguments
// bizim çağıracağımız fonksiyon bu
template <typename... Types>
inline std::size_t hash_val(const Types &...args)
{
    std::size_t seed = 0;
    hash_val(seed, args...);
    return seed;
}

#endif // MYHASH_HPP