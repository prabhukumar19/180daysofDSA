#include<iostream>
using namespace std;

int splitArray(int arr[] ,int n, int k) {
        // code here
        int start=0, end=0, mid, ans;
        for(int i=0; i<n; i++){
           if(start<arr[i]) start=arr[i];
            end+=arr[i];
        }
        while(start<=end){
            mid=start+(end-start)/2;
            
            int sum=0, count=1;
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
    int arr[]= {1, 2, 3, 4};
    int n=4;
    int k=3;

    cout<<"Ans is : "<<splitArray(arr, n, k);//4
}