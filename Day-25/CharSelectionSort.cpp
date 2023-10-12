#include<iostream>
using namespace std;

int main(){

    char arr[]={'B','C','A','E','D','F'};
    int n=6;
    for(int i=0; i<n-1; i++){
        int index=i;
        for(int j=i+1;j<n; j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        swap(arr[i],arr[index]); //Inbuilt Function;
    }


    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}