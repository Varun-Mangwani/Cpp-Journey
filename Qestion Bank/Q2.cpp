//solve the following expression:
// a=(b=10,b*2,b=b+45,b-10);

#include<iostream>

int main()
{
    int b;
    //Expression assigned to a
    int a=(b=10,b*2,b=b+45,b-10);// b = 10, b = 10+45(55), b-10 is assigned to a

    std::cout << "a = " << a << "\n"; //45
    std::cout << "b = " << b << "\n"; //55

}