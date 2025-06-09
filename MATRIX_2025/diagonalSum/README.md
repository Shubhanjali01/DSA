### In a square matrix:

Primary Diagonal (Main Diagonal) elements have indices i == j

Secondary Diagonal (Anti Diagonal) elements have indices i + j == n - 1

### Algorithm (for both diagonals)
Input the matrix size n and matrix elements.

Initialize two variables: primarySum and secondarySum to 0.

Loop through the matrix:

For index i, add matrix[i][i] to primarySum.

Add matrix[i][n - i - 1] to secondarySum.

now add primarySum and secondarySum to totalSum

If n is odd:

Subtract the center element once: totalSum -= matrix[n/2][n/2]