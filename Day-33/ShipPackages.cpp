#include<iostream>
using namespace std;

int shipWithinDays(int arr[], int size, int days) {
         long long start=0, end=0, mid, ans;
        long long n=size;
        for(int i=0; i<n; i++){
           if(start<arr[i]) start=arr[i];
            end+=arr[i];
        }
        while(start<=end){
            mid=start+(end-start)/2;
            
            long long sum=0, count=1;
            for(int i=0; i<n; i++){
                sum+=arr[i];
                if(sum>mid){
                    count++;
                    sum=arr[i];
                }
            }
            if(count<=days){
                ans=mid;
                end=mid-1;
            }
            else {
                start=mid+1;
            }
            
        }
        return ans;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=10;
    int days=5;

    cout<<"Ans is : "<<shipWithinDays(arr,size, days);
}