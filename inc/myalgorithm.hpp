#ifndef MY_ALGORITHM_HPP
#define MY_ALGORITHM_HPP

#include <iosfwd>

template <typename InIter, typename OutIter>
OutIter Copy(InIter beg, InIter end, OutIter obeg)
{
    while (beg != end)
        *obeg++ = *beg++;
    return obeg;
}

template <typename InIter, typename OutIter, typename UnaryPredicate>
OutIter Copy_if(InIter ibeg, InIter iend, OutIter obeg, UnaryPredicate f)
{
    while (ibeg != iend)
    {
        if (f(*ibeg))
            *obeg++ = *ibeg;
        ++ibeg;
    }

    return obeg;
}

template <typename InIter, typename ValType>
std::size_t Count(InIter beg, InIter end, const ValType &val)
{
    std::size_t val_cnt{};
    while (beg != end)
        if (*beg++ == val)
            ++val_cnt;

    return val_cnt;
}

template <typename InIter, typename UnaryPredicate>
std::size_t Count_if(InIter beg, InIter end, UnaryPredicate f)
{
    std::size_t cnt{};
    while (beg != end)
        if (f(*beg++))
            ++cnt;

    return cnt;
}

template <typename InIter, typename T>
InIter Find(InIter beg, InIter end, const T &tval)
{
    while (beg != end)
    {
        if (*beg == tval)
            return beg;
        ++beg;
    }
    return beg;
}

#endif