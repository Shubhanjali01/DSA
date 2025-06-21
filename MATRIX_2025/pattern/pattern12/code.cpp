#include <iostream>
using namespace std;

void pattern12(int n)
{
    int num = 1; // to keep track of current number
    for (int i = 1; i <= n; i++)
    {
        // for each row print i numbers
        for (int j = 1; j <= i; j++)
        {
            cout << num<< " ";
            num++;
        }
        cout << endl; // for each row move to next line
    }
}
int main()
{

    int n = 5;
    pattern12(n);
    return 0;
}