#include <iostream>
using namespace std;

void pattern11(int n)
{

    for (int i = 1; i <= n; i++)
    {
        // first part : print number from 1 to i
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // print space
        for (int j = 1; j <= (2 * n - 2 * i); j++)
        {
            cout << " ";
        }

        // second part:print number from i to 1
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl; // move each row next line
    }
}

int main()
{

    int n = 4;
    pattern11(n);
    return 0;
}