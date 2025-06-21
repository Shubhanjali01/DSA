#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // print space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // print star
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // print space
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }

        // print star
        for (int j = 1; j <= 2 * (n - i) + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n + 1; i < 2 * n; i++)
    {
        for (int j = i; j < 2 * n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // print space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // print star
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        // print space
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        // print star
        for (int j = 1; j <= 2 * n - 2 * i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 1)
            {
                if (j % 2 == 1)
                {
                    cout << 1;
                }
                else
                {
                    cout << 0;
                }
            }
            else
            {
                if (j % 2 == 0)
                {
                    cout << 1;
                }
                else
                {
                    cout << 0;
                }
            }
        }
        cout << endl;
    }
}

void pattern10(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // Left part: increasing numbers from 1 to i
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // print  Spaces in the middle
        for (int j = 1; j <= (2 * n - 2 * i); j++)
        {
            cout << " ";
        }

        // Right part: decreasing numbers from i to 1
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl; // Move to next line after each row
    }
}

void pattern12(int n)
{
    // initialize a num to keep track of current element
    int num = 1;

    // for each row
    for (int i = 1; i <= n; i++)
    {
        // for each cols print number
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl; // for each row move to next line
    }
}

void pattern13(int n)
{
    // loop row from i = 1 to n
    for (int i = 1; i <= n; i++)
    {
        // for each row
        // loop cols from j=1 to i
        for (int j = 1; j <= i; j++)
        {
            char ch = 'A' + (j - 1);
            cout << ch;
        }
        cout << endl; // for each row move next line
    }
}

void pattern14(int n)
{
    // loop row from i = 1 to n
    for (int i = 1; i <= n; i++)
    {
        // for each row
        // loop cols from j=1 to i
        for (int j = 1; j <= n - i + 1; j++)
        {
            char ch = 'A' + (j - 1);
            cout << ch;
        }
        cout << endl; // for each row move next line
    }
}
void pattern15(int n)
{
    // loop row from i = 1 to n
    for (int i = 1; i <= n; i++)
    {
        // for each row
        // loop cols from j=1 to i
        for (int j = 1; j <= i; j++)
        {
            char ch = 'A' + (i - 1);
            cout << ch;
        }
        cout << endl; // for each row move next line
    }
}
int main()
{
    int n = 5;
    // pattern(n);
    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // pattern6(n);
    // pattern7(n);
    // pattern8(n);
    // pattern9(n);

    // int n = 4;
    // pattern10(n);

    // pattern12(n);

    // pattern13(n);
    // pattern14(n);
    pattern15(n);

    return 0;
}