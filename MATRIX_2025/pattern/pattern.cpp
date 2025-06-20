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
        cout<<endl;
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
        cout<<endl;
    }
}

void pattern9(int n){
    
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
    pattern9(n);

    return 0;
}