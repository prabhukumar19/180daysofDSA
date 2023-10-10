#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={10,30,6,8,11,9};
    int temp=arr[5];
    for(int i=4; i>=0; i--){
        arr[i+1]=arr[i];
    }
    arr[0]=temp;
    printArray(arr, 6);

}