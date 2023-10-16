#include<iostream>
using namespace std;

int main(){

    int arr[]={5,3,7,6,1,2,4};
    int n=7;
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