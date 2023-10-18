#include<iostream>
using namespace std;

int countZeroes(int arr[], int n) {
    // code here
    int ans;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            ans=i;
            break;
        }
    }
    return n-ans;
}

int main(){
    int arr[]={1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0};
    int n=12;
    cout<<countZeroes(arr,n);
}