// TRANSPOSE OF SQUARE MATRIX INPLACE TRANSPOSE 
// OR MODIFIED ORIGINAL MATRIX TO TRANSPOSE MATRIX 


#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
        
    };

  int n = matrix.size();// becz it is a square matrix rows == cols

    for(int i =0 ;i<n;i++){

        for(int j =i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
       
    }

    // this two for loop only run three == (((n*n - (n+1)/2 )/2)) times in this case 
    for(auto &row:matrix){
        for(int val:row){
            cout<<val<<" ";
        }
        cout<<endl;
    }

    return 0;
}
