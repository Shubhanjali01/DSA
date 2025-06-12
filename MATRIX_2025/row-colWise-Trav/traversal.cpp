#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

void rowTraversal(vector<vector<int>> &arr)
{
    int rows = arr.size();
    int cols = arr[0].size();

    // Accessing elements row-wise
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j]++;
        }
    }
}

void colTraversal(vector<vector<int>> &arr)
{
    int rows = arr.size();
    int cols = arr[0].size();

    // Accessing elements row-wise
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            arr[i][j]++;
        }
    }
}

int main()
{
    // row-wise vs column-wise traversal

    int n = 10000; // size of matrix (n * n)
    vector<vector<int>> arr(n, vector<int>(n, 0));

    // Time taken by row-major order
    clock_t t = clock();
    rowTraversal(arr);

    t = clock() - t;
    cout << "Row major access time:" << t / (double)CLOCKS_PER_SEC << " s\n";

    // Time taken by col-major order
    t = clock();
    colTraversal(arr);

    t = clock() - t;
    cout << "Col major access time :" << t / (double)CLOCKS_PER_SEC << " s\n";

    return 0;
}