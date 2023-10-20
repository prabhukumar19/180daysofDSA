#include<iostream>
using namespace std;

 int search(int nums[], int size, int target) {
         int start=0;
        int end=size-1;
        int ans=-1;
        
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>=nums[0]){
               if(nums[start]<=target && nums[mid]>target){
                   end=mid-1;
               }
                else {
                    start=mid+1;
                }
            }else {
                if(nums[mid]<target && nums[end]>=target){
                   start=mid+1;
               }
                else {
                     end=mid-1;
                }
            }
        }
        return ans;
    }

int main(){
    int arr[]={4,5,6,7,0,1,2}; //1
    int arr1[]={0,2,1}; //0
    int n=7;
    int target=2;
    cout<<search(arr,n,target);
}