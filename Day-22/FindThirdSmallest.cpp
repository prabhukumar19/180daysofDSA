#include<iostream>
#include<limits.h>
using namespace std;

int main(){

    int arr[6]={2,4,5,-1,5,0};
    int minimum=INT_MAX;

    for(int i=0; i<6; i++){
        if(arr[i]<minimum){
            minimum=arr[i];
        }
    }

    int secondSmallest=INT_MAX;
    for(int i=0; i<6; i++){
        if(arr[i]!=minimum && arr[i]<secondSmallest){
            secondSmallest=arr[i];
        }
    }

    int thirdSmallest=INT_MAX;
     for(int i=0; i<6; i++){
        if(arr[i]!=minimum && arr[i]!=secondSmallest && arr[i]<thirdSmallest){
            thirdSmallest=arr[i];
        }
    }
    cout<<"Minumum : "<<minimum<<endl;
    cout<<"2nd Smallest : "<<secondSmallest<<endl;
    cout<<"3rd Smallest : "<<thirdSmallest<<endl;




}
