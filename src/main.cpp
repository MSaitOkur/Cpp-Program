// //=======================================
// //=======================================
// #include <iostream>
// class Base
// {
// public:
//     void func(int);
// };
// class Der : public Base
// {
// public:
//     void func(double);
// };
// class DerDer : public Der
// {
// public:
//     void func(long);
// };
// // DerDer için, Der direct base class
// // DerDer için, Base indirect base class
// //=======================================
// //=======================================
// #include <iostream>
// class Base
// {
// public:
//     void func(int)
//     {
//         std::cout << "Base::func(int) \n";
//     }
// };
// class Der : public Base
// {
// public:
//     void func()
//     {
//         std::cout << "Der::func() \n";
//     }
//     void func(int x)
//     { // Forwarding Function
//         Base::func(x);
//     }
// };
// int main()
// {
//     Der mder;
//     mder.func(12); // Forwarding Function Call
//     mder.func();
//     186
// }
// //=======================================
// //=======================================