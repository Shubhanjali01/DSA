#include <bits/stdc++.h>
using namespace std;

int main()
{

    // square matrix
    vector<vector<int>> matrix = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}};
    int n = matrix.size();
    bool flag = true;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if ((i == j) && (matrix[i][j] != 1))
            {
                flag = false;
                break;
            }
            else if ((i != j) && (matrix[i][j] != 0))
            {
                flag = false;
                break;
            }
        }
    }
    if (flag == 1)
    {
        cout << "Yes its an identity matrix" << endl;
    }
    else
    {
        cout << "No, its not an identity matrix" << endl;
    }

    return 0;
}
