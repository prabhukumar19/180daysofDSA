#include<iostream>
using namespace std;

int findIndex(int arr[], int size, int element){
 for(int i=0; i<size; i++){
      if(arr[i]==element){
       return i;
      }
  }
  return -1;
}

int main(){

    int arr[20], element, size;
    cout<<"Enter the size of array which is maximum upto 20 : "<<endl;
    cin>>size;
    cout<<"Enter the elements of Array : "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Enter element which you want to find index : "<<endl;
    cin>>element;

    cout<<findIndex(arr,size,element);
    

   
    
}