#include<iostream>
using namespace std;

int main(){

    int arr[]={5,3,7,6,1,2,4};
    int n=7;
    for(int i=1; i<n; i++){
        for(int j=i; j>0; j--){
            if(arr[j]>arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}