#include<iostream>
using namespace std;

int main(){

    char arr[]={'E','A','D','B','C'};
    int n=5;
    //Dreasing order
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}