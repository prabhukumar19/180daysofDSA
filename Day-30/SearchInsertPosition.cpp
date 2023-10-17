#include<iostream>
using namespace std;

int searchInsert(int nums[], int n, int target) {
        int start=0;
        // int end=nums.size()-1;
        int end=n-1;
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

int main() {
   int nums[] = {1,3,5,6};
   int nums1[] = {1,3,5,6};
   cout<<"Element found at : "<<searchInsert(nums,4,5)<<endl;
   cout<<"Insert position will be : "<<searchInsert(nums1,4,2);

}