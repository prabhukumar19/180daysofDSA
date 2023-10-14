#include<iostream>
using namespace std;

int main(){

    int arr[]={5,3,6,2,4,1}; //Selection sort by taking lowest number first;
    int n=6;
    for(int i=0; i<n-1; i++){
        int index=i;
        for(int j=i+1;j<n; j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        // swap(arr[i],arr[index]); //Inbuilt Function;

        //Swaping Using Temp variable 
        // int temp=arr[i];
        // arr[i]=arr[index];
        // arr[index]=temp;

        //without temp variable;
        arr[i]=arr[i]+arr[index];
        arr[index]=arr[i]-arr[index];
        arr[i]=arr[i]-arr[index];

    }


    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}