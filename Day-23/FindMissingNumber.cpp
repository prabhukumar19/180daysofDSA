#include<iostream>
using namespace std;

int findMissingNumber(int arr[], int size){
    int ans=0;
    int sum=0;
    for(int i=0; i<size; i++){
       ans=ans+arr[i];
    }
    sum=((size)*(size+1))/2;
    return ans-sum;
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,4,5,6};
    cout<<findMissingNumber(arr,5);
    

}