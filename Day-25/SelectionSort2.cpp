#include<iostream>
using namespace std;

int main(){

    int arr[]={5,3,6,2,4,1}; //Selection sort with Taking highest number first
    int n=6;

    for(int i=n-1; i>=0; i--){
        int maxNumber=arr[i];
        int index=i;
        for(int j=0; j<i; j++){
            if(arr[j]>maxNumber){
                maxNumber=arr[j];
                index=j;
            }
        }
        if(maxNumber>arr[i]){

            swap(arr[i], arr[index]);
        }

    }

    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}