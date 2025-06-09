#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<vector<int>> MA =
        {
            {1, 2,3},
            {3, 4,4}};

    vector<vector<int>> MB =
        {
            {5, 6,7},
            {7, 8,9}
        };


    int n = MA.size();       // number of rows
    int m = MA[0].size();    // number of columns

    vector<vector<int>> MC(n, vector<int>(m)); // correctly initialize MC


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            MC[i][j] = MA[i][j] + MB[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << MC[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}