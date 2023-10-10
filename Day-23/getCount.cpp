#include<iostream>
using namespace std;

int getIndex(int arr[], int n, int key){
        for(int i=0; i<n; i++){
            if(arr[i]==key){
                return i;
            }
        }
        return -1;
    }
    int getCount(int arr[], int n, int num1, int num2)
    {
        //Complete the function 
        int count=0;
        int start=getIndex(arr,n,num1);
        int end=getIndex(arr,n,num2);
        while(start<=end){
            count++;
            start++;
            end--;
        }
        return count;
    }
    int main(){
        int arr[]={4, 2, 1, 10, 6};
        int num1=4;
        int num2=6;
        int ans=getCount(arr, 5,num1,num2);
        cout<<"ANs"<<ans;
    }