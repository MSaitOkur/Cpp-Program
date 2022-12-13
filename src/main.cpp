#include <iostream>
#include "fraction.hpp"

int main()
{
    Fraction f1{1, 3};
    Fraction f2{1, 3};
    Fraction f3{2, 3};

    std::cout << "f1 = " << f1 << '\n';
    std::cout << "f2 = " << f2 << '\n';
    std::cout << "f3 = " << f3 << '\n';

    std::cout << "f1 <  f2 = " << (f1 < f2) << ", f2 <  f3 = " << (f2 < f3) << "\n";
    std::cout << "f1 <= f2 = " << (f1 <= f2) << ", f2 <= f3 = " << (f2 <= f3) << "\n";
    std::cout << "f1 >  f2 = " << (f1 > f2) << ", f2 >  f3 = " << (f2 > f3) << "\n";
    std::cout << "f1 >= f2 = " << (f1 >= f2) << ", f2 >= f3 = " << (f2 >= f3) << "\n";
    std::cout << "f1 == f2 = " << (f1 == f2) << ", f2 == f3 = " << (f2 == f3) << "\n";
    std::cout << "f1 != f2 = " << (f1 != f2) << ", f2 != f3 = " << (f2 != f3) << "\n";
}