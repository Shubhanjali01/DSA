#include <bits/stdc++.h>
using namespace std;

int main()
{
    // square matrix
    vector<vector<int>> matrix = {
        // {1, 2, 3},
        // {4, 5, 6},
        // {7, 8, 9}

        {2, 2, 3, 4},
        {4, 5, 6, 6},
        {7, 3, 3, 1},
        {7, 5, 2, 8}

    };

    int n = matrix.size();

    // int sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i == j)
    //         {
    //             sum = sum + matrix[i][j];
    //         }
    //         else if (j == n - i - 1)
    //         {
    //             sum = sum + matrix[i][j];
    //         }
    //     }
    // }


    // improved : 08 june 2025 
    int preSum = 0;// primary diagonal sum 
    int secSum = 0;// secondary diagonal sum
    for (int i=0;i<n;i++){
        preSum += matrix[i][i];
        secSum += matrix[i][n-i-1];

    }

    int totalSum = preSum + secSum;// total sum 
    if(n%2 == 1){
        totalSum -= matrix[n/2][n/2];
    }
    cout << "matrix Sum: " << totalSum << endl;
    return 0;
}
