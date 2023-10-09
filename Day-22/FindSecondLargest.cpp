#include<iostream>
#include <limits.h>
using namespace std;

int main(){

    int arr[20]={2,10,5,4,6,11};
    int maximum=INT_MIN;
    // cout<<"Enter the elements of Array : "<<endl;
    // for(int i=0; i<5; i++){
    //     cin>>arr[i];
    // }
    int second=INT_MIN;
    for(int i=0; i<6; i++){
        if(arr[i]>maximum){
            maximum=arr[i];
        }
    }
    
    for(int i=0; i<6; i++){
        if(arr[i]>second && arr[i]!=maximum){
            second=arr[i];
        }
    }

    cout<<"Maximum : "<<maximum<<endl;
    cout<<"Second Maximum : "<<second;
    
}