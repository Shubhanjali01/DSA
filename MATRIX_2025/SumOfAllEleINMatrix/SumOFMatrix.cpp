#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<vector<int>> matrix = {
        {1,2},
        {3,4}
    
    };

    int rows = matrix.size();
    int cols = matrix[0].size();
    int sum =0;
    for(int i =0 ;i<rows;i++){

        for(int j =0;j<cols;j++){
           sum = sum + matrix[i][j];
        }
        
    }
    cout<<"Sum :"<<sum;

    return 0;
}
