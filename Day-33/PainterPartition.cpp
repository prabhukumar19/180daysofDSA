#include<iostream>
using namespace std;

long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        long long start=0, end=0, mid, ans;
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
            if(count<=k){
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
    int arr[]= {5,10,30,20,15};
    int n=5;
    int k=3;
    cout<<minTime(arr,n,k);//35
}