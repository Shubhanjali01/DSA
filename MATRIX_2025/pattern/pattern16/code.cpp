#include<iostream>
using namespace std;

int main(){

    int n=4;// total number of rows
    for(int i=1;i<=n;i++){
        // print leading space 
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        // print increasing letters
        for(int j=0;j<i;j++){
            char ch = 'A'+j;
            cout<<ch;
        }

        // print decreasing letters
        for(int j=i-2;j>=0;j--){
            char ch = 'A'+j;
            cout<<ch;
        }
        cout<<endl;
    }

   return 0;
}