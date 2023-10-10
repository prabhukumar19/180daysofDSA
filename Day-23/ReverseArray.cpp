#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start=0;
    int end=size-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={10,30,6,8,11,9};
    reverseArray(arr,6);
    printArray(arr, 6);

}