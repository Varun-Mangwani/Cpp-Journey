// void _Isolation_WS(char val[])
// {
//     int i = 0, k = 0;
//     char tmp[100];

//     do
//     {

//     } while (val[i] != '\0');
//     std::cout << std::endl
//               << tmp;
// }

// int main()
// {
//     char vl[] = "Hi I AM Varun";
//     // _Isolation_WS(vl);
//     int i = 0, k = 0;
//     char tmp[100];
//     while (vl[i] != 32)
//     {
//         tmp[k] = vl[i];
//         if (vl[i] == ' ')
//         {
//             std::cout << std::endl
//                       << "Value Is : " << tmp;
//             k = -1;
//         }
//         i++;
//         k++;
//     }
// }

#include <iostream>
#include <vector>
using namespace std;


int main()
{
    //Main Text Array
    char arr[] = "Hi I Am Varun Mangwani , I Am An It Enthusiat With Strong Intrest In Ai & ML With Software And Web Dev Field.";
    //Output Matrix Array
    char classWs[200][50];
    //Column Filled Counter
    int ColFills = 0;

    //Counter For Loops
    int i = 0, c = 0, r = 0;
    while (arr[i] != '\0')
    {
        //Condition FOr Text Transfer
        if (arr[i] != ' ')
        {
            std::cout << std::endl
                             << "True Case";
            classWs[c][r] = arr[i];
            r++;
        }
        else
        {
            //Condition FOr Skipping
            std::cout << std::endl
                             << "false Case";

            ColFills++;
            c++;
            r = 0;
        }
        i++;
    }

    //Matrix Call Loop
    for (int i = 0; i <= ColFills; i++)
    {
        std::cout << std::endl << classWs[i];
    }
    
}