#include <iostream>
class A
{
public:
    explicit A(double val)
    {
        std::cout << "explicit A(double), val = " << val << '\n';
    }

    A(int val)
    {
        std::cout << "A(int), val = " << val << '\n';
    }
};

int main()
{
    A ax = 10.5; // geçerli
}
