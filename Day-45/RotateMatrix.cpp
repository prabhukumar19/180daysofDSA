
#include<iostream>
using namespace std;


int main(){

    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    //Transpose of Matrix;
    int n=3;

     for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        //Reverse Each Row

        for(int i=0; i<n; i++){
            int start=0, end=n-1; 
            while(start<end){
                swap(matrix[i][start],matrix[i][end]);
                start++;
                end--;
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
}