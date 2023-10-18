#include<iostream>
using namespace std;

int firstPosition(int arr[], int size, int target){
    int start=0;
    int ans=-1;
    int end=size-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else {
            end=mid-1;
        }
    }
    return ans;

}

int lastPosition(int arr[], int size, int target){
 int start=0;
    int ans=-1;
    int end=size-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else {
            end=mid-1;
        }
    }
    return ans;
}

int main(){
    int arr[]={2,5,6,8,9,12,15,15,15,16};
    int n=10;
    int target=15;
    cout<<"First position of "<<target<<"is at : "<<firstPosition(arr, n, target)<<endl;
    cout<<"Last position of "<<target<<"is at : "<<lastPosition(arr, n, target)<<endl;

    cout<<"Final answer is : "<<lastPosition(arr, n, target)-firstPosition(arr, n, target)<<endl;


    return 0;
}