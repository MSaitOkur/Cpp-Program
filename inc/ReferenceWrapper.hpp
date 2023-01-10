#ifndef REFERENCEWRAPPER_HPP
#define REFERENCEWRAPPER_HPP

template <typename T>
class ReferenceWrapper
{
public:
    ReferenceWrapper(T &tr) : mp{&tr} {}
    ReferenceWrapper &operator=(T &tr)
    {
        mp = &tr;
        return *this;
    }

    operator T &()
    {
        return *mp;
    }

    T &get()
    {
        return *mp;
    }

private:
    T *mp;
};

template <typename T>
ReferenceWrapper<T> Ref(T &x)
{
    return ReferenceWrapper<T>{x};
}

#endif // REFERENCEWRAPPER_HPP

/*
namespace detail
{
    template <class T>
    constexpr T &FUN(T &t) noexcept { return t; }

    template <class T>
    void FUN(T &&) = delete;
}

template <class T>
class reference_wrapper
{
public:
    // types
    typedef T type;

    // construct/copy/destroy
    template <class U, class = decltype(detail::FUN<T>(std::declval<U>()),
                                        std::enable_if_t<!std::is_same_v<reference_wrapper,
                                                                         std::remove_cvref_t<U>>>())>
    constexpr reference_wrapper(U &&u) noexcept(noexcept(detail::FUN<T>(std::forward<U>(u))))
        : _ptr(std::addressof(detail::FUN<T>(std::forward<U>(u)))) {}

    reference_wrapper(const reference_wrapper &) noexcept = default;

    reference_wrapper &operator=(const reference_wrapper &x) noexcept = default; // assignment

    constexpr operator T &() const noexcept // access
    {
        return *_ptr;
    }

    constexpr T &get() const noexcept { return *_ptr; }

    template <class... ArgTypes>
    constexpr std::invoke_result_t<T &, ArgTypes...> operator()(ArgTypes &&...args) const
    {
        return std::invoke(get(), std::forward<ArgTypes>(args)...);
    }

private:
    T *_ptr;
};

// deduction guides
template <class T>
reference_wrapper(T &) -> reference_wrapper<T>;
*/