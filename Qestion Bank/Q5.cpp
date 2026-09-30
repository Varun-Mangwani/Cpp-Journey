// accept 3 num from user and find maximum
#include <iostream>

int main()
{
    int a, b, c;
    std::cout << "Enter The Numbers(1,2,3): ";
    std::cin >> a >> b >> c;

    if (a > b && a > c)
    {
        std::cout << a << " Is Maximum\n";
    }
    else if (b > c)
    {
        std::cout << b << " Is Maximux\n";
    }
    else
    {
        std::cout << c << " is Maximum\n";
    }
}