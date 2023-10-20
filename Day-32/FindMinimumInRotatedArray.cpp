#include<iostream>
using namespace std;

int findMin(int nums[], int size) {
        int start=0;
        int end=size-1;
        int mid;
        int ans=nums[0];
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]>=nums[0]){
                start=mid+1;
            }
            else {
                ans=nums[mid];
                end=mid-1;
            }
        }
        return ans;
    }

int main(){
    int arr[]= {3,4,5,1,2}; //1
    int arr1[]={0,2,1}; //0
    int n=3;
    cout<<findMin(arr1,n);
}