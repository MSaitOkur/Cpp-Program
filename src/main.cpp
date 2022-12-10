// #include <iostream>

// class F;

// class C {
// public:
// 	C() { std::cout << "C"; }
// 	friend C F::createC();
// };

// class F {
// public:
// 	F() { std::cout << "F"; }

// 	C createC() { return C(); }
// };

// int main() {
// 	F f;
// 	C c = f.createC();
// }

#include <iostream>

class A;

class B
{
public:
    B() { std::cout << "B"; }

    friend B A::createObject();
};

class A
{
public:
    A() { std::cout << "A"; }

    B createObject() { return B(); }
};

int main()
{
    A a;
    B b = a.createObject();
}