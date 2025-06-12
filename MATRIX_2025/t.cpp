#include <iostream>
#include <vector>
#include <algorithm> // For sort()

using namespace std;

void sortColumns(vector<vector<int>> &mat, int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        // Step 1: Extract the column
        vector<int> temp;
        for (int j = 0; j < row; j++)
        {
            temp.push_back(mat[j][i]);
        }

        // Step 2: Sort the column
        sort(temp.begin(), temp.end());

        // Step 3: Put back the sorted values
        for (int j = 0; j < row; j++)
        {
            mat[j][i] = temp[j];
        }
    }
}

// Function to print the matrix
void printMatrix(const vector<vector<int>> &mat)
{
    for (auto row : mat)
    {
        for (auto val : row)
            cout << val << " ";
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> mat = {
        {5, 4, 7},
        {1, 3, 8},
        {2, 9, 6}};

    int row = mat.size();
    int col = mat[0].size();

    cout << "Original Matrix:\n";
    printMatrix(mat);

    sortColumns(mat, row, col);

    cout << "\nMatrix After Column-wise Sort:\n";
    printMatrix(mat);

    return 0;
}
