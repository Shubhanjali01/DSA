#### Definition of Identity Matrix
A square matrix is called an identity matrix if:

All diagonal elements are 1.

All non-diagonal elements are 0.

#### Algorithm
Input the matrix dimensions and elements.

If rows ≠ columns, it's not an identity matrix.

For each element:

If i == j (diagonal), check if matrix[i][j] == 1.

Else, check if matrix[i][j] == 0.

If all checks pass, it's an identity matrix.

