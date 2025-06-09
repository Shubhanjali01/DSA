#include <bits/stdc++.h>
using namespace std;

void sortRows(vector<vector<int>> &mat)
{
    for (auto &row : mat)
        sort(row.begin(), row.end());
}
int main()
{

    // initialize a matrix
    // basic syntax to initialise a matrix is
    /*
    int rows = 4;
    int cols = 5;
    vector<vector<int>> mat = (rows,vector<int>cols);
    */

    // sort this matrix row wise
    vector<vector<int>> mat = {
        {12, 42, 63, 41},
        {25, 63, 73, 83},
        {39, 25, 33, 74}

    };
    int rows = mat.size();
    int cols = mat[0].size();

    // use sort function sort(mat)
    sortRows(mat);

    // print the mat
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}