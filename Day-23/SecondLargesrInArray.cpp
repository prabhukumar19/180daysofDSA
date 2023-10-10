#include<iostream>
using namespace std;
int print2largest(int arr[], int n) {
	    // code here
	    
	    int ans=-1;
	    for(int i=0; i<n; i++){
	        if(arr[i]>ans){
	            ans=arr[i];
	        }
	    }
	    int second=-1;
	    for(int i=0; i<n; i++){
	        if(arr[i]!=ans){
	            second=max(second,arr[i]);
	        }
	    }
	    return second;
	}
int main(){
    int arr[]={10,36,5,9,1,4,9};
    cout<<"Second Largest : "<<print2largest(arr, 7);
}