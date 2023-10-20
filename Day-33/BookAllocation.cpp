#include<iostream>
using namespace std;

 int findPages(int arr[], int N, int M) {
        //code here
        if(M>N) return -1;
        int start=0, end=0, mid, ans;
        for(int i=0; i<N; i++){
            start=max(start,arr[i]);
            end+=arr[i];
        }
        while(start<=end){
            mid=start+(end-start)/2;
            int pageSum=0,studentCount=1;
            for(int i=0; i<N; i++){
                pageSum+=arr[i];
                if(pageSum>mid){
                    studentCount++;
                    pageSum=arr[i];
                }
                
            }
            if(studentCount<=M){
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
    int arr[]={12,34,67,90};
    int n=4;
    int m=2;
    cout<<findPages(arr,n,m);
}