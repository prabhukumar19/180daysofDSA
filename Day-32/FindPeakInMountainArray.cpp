#include<iostream>
using namespace std;

int peakIndexInMountainArray(int arr[], int size) {
        int start=0;
        int end=size-1;
        int mid;
        while(start<=end){
            mid=end+(start-end)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[mid]>arr[mid-1]) {
                start=mid+1;
            }
            else {
                end=mid-1;
            }
        }
        return -1;
}

int main(){
    int arr[]={0,10,5,2}; //1
    int arr1[]={0,2,1,0}; //1
    int n=4;
    cout<<peakIndexInMountainArray(arr,n);
}