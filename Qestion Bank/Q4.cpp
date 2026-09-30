//solve the following expression:
// a = (b=60,b>>2)

#include<iostream>

int main()
{
    int b;
    int a = (b=60,b>>2);

    std::cout << "a is " << a << "\n";
    std::cout << "b is " << b << "\n";
}