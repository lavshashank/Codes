// given two numbers a and b, write a program to print all the prime numbers present between them.
#include <iostream>
using namespace std;

bool val(int a)
{
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a, b;
    cout << "enter the two numbers" << endl;
    cin >> a >> b;
    for (int i = a; i < b; i++)
    {
        if (val(i) == true)
        {
            cout << i << endl;
        }
    }
    return 0;
}
