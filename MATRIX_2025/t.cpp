// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Input
    vector<vector<int>> mat = {{1, 4, 8},
                               {9, 4, 2},
                               {9, 6, 2}};
    
    int n = mat.size();
    int priSum =0;
    int secSum = 0;
    for(int i=0;i<n;i++){
        priSum += mat[i][i];
        secSum += mat[i][n-i-1];
    }
    int totalSum = priSum + secSum;

    if(n%2 == 1){
        totalSum -= mat[n/2][n/2];
    }
   cout<<totalSum<<endl;

    return 0;
}