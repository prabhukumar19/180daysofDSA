#include<iostream>
using namespace std;

int searchInsert(int nums[], int size, int target) {
        int start=0;
        int end=size-1;
        int mid=start+(end-start)/2;
        while(start<=end){
            if(nums[mid]==target){
                return mid;
            }
            else if(target>nums[mid]){
                start=mid+1;
            }else {
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return mid;
}

int main(){
    int arr[]={1,3,4,5,6};
    cout<<searchInsert(arr,5,2);
    return 0;
}