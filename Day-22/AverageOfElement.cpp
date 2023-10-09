#include<iostream>
using namespace std;

int main(){

    int arr[18], average=0, sum=0;
    cout<<"Enter the elements of Array : "<<endl;
    for(int i=0; i<18; i++){
        cin>>arr[i];
    }


    for(int i=0; i<18; i++){
       sum+=arr[i];
       average=sum/18;
    }
    cout<<"Average of its element is : "<<average;
}