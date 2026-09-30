//solve the following expression:
// a=(b=10,b*4,b-5);

#include<iostream>

int main()
{
    int b;
    int a = (b=10,b*4,b-5);

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
}