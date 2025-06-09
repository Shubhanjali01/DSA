#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<vector<int>>matrix = {
        {1,2,5},
        {4,3,6},
        {7,8,9}

        // {1,2},
        // {4,6},
        // {7,5}
       
    };

    int key = 5;


    int rows = matrix.size();
    int cols = matrix[0].size();

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(matrix[i][j] == key){
                cout<<"["<<i<<","<<j<<"]"<<endl;
            }
        }
        cout<<endl;
    }
    
    return 0;
}