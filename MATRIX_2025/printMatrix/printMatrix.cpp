#include<bits/stdc++.h>

// required header files are:
/*

#include<iostream>
#include<vector>

*/
using namespace std;

int main(){
    // a1 : this is the initalization of 2d vector or 2d matrix in cpp 
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6}
    };

    // a2 : size of rows and size of colmns in cppp
    int rows = matrix.size();
    int cols = matrix[0].size(); // make sure all rows have equal nos of cols

    cout<<"rows :"<<rows <<", cols: "<<cols<<endl;

    // print matrix 
    for(int i =0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            // print cols
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

// a3 : to run mat.cpp file on cmd : g++ mat.cpp -o ef          after that run executable file ef 