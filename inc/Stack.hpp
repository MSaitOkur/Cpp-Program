#ifndef STACK_HPP
#define STACK_HPP

#include <deque>

template <typename T, typename Container = std::deque<T>>
class Stack
{
public:
    typename Container::size_type size() const
    {
        return mcon.size();
    }

    bool empty() const
    {
        mcon.empty();
    }

    void push(const T &tval)
    {
        mcon.push_back(tval);
    }

    void pop()
    {
        mcon.pop_back();
    }

    T &top()
    {
        return mcon.back();
    }

    template <typename... Args>
    void emplace(Args &&...args)
    {
        mcon.emplace(args...);
    }

private:
    Container mcon;
};

#endif // STACK_HPP