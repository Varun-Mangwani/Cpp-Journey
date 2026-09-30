//solve the following expression:
// a = (b+2*5%2)

#include<iostream>

int main()
{
    int b = 40;
    //Expression assigned to a
    int a= (b+2*5%2);

    std::cout << "a = " << a << "\n"; //45
    std::cout << "b = " << b << "\n"; //55
    

}