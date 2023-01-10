#ifndef MYPAIR_HPP
#define MYPAIR_HPP

template <typename T, typename U>
struct mypair
{
    T mt;
    U mu;

    mypair(const mypair &) = default;
    mypair(mypair &&) = default;
};

// template <class T1, class T2>
// struct pair
// {

//     constexpr explicit(/* see description */) pair();
//     constexpr explicit(/* see description */) pair(const T1 &x, const T2 &y);

//     template <class U1 = T1, class U2 = T2>
//     constexpr explicit(/* see description */) pair(U1 &&x, U2 &&y);

//     template <class U1, class U2>
//     constexpr explicit(/* see description */) pair(const pair<U1, U2> &p);

//     template <class U1, class U2>
//     constexpr explicit(/* see description */) pair(pair<U1, U2> &&p);

//     template <class... Args1, class... Args2>
//     constexpr pair(piecewise_construct_t, tuple<Args1...> first_args, tuple<Args2...> second_args);

//     constexpr pair &operator=(const pair &p);
//     template <class U1, class U2>

//     constexpr pair &operator=(const pair<U1, U2> &p);
//     constexpr pair &operator=(pair &&p) noexcept(/* see description */);

//     template <class U1, class U2>
//     constexpr pair &operator=(pair<U1, U2> &&p);

//     constexpr void swap(pair &p) noexcept(/* see description */);
// };

// template <class T1, class T2>
// pair(T1, T2) -> pair<T1, T2>;

#endif
