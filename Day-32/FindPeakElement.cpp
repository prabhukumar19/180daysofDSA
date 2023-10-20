#include<iostream>
using namespace std;

int findPeakElement(int arr[], int size) {
         int n = size;
        for(int i=0; i<n-1; i++){
            if(arr[i] >= arr[i+1]){
                return i;
            }
        }
        return n-1;
}

int main(){
    int arr[]={1,2,3,1};
    int n=4;
    cout<<findPeakElement(arr,n);//2;
}