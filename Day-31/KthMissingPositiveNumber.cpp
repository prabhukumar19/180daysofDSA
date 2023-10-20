#include<iostream>
using namespace std;
int findKthPositive(int arr[], int size, int k) {
        int start=0;
        int end=size-1;
        int ans=size;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]-mid-1>=k){
               ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans+k;
}

int main(){
    int arr[]={2,3,4,7,11};
    int n=5;
    int k=5;
    cout<<findKthPositive(arr,n,k);

}