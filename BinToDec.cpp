#include<iostream>

using namespace std;
int pow(int base,int expo)
{
    int ans = 1;
    if(expo == 0)
    {
        return 1;
    }
    for(int i = 1;i<=expo;i++)
    {
        ans = ans * base;
    }
   // cout << ans;
    return ans;
}
int main()
{
    char bin[9];
    cout << "Enter The Binary Number: ";
    cin >> bin;
    int sum=0;
    for(int i = 7;i>0;i--)
    {
        if(bin[i] == '1')
        {
            sum = sum + pow(2,7-i);
        }
    }
    cout << sum;
    return 0;
}