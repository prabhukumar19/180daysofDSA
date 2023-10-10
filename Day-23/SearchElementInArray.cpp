#include<iostream>
using namespace std;

int searchElement(int arr[], int size, int element){
    for(int i=0; i<size; i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={10,30,6,8,11,9};
    int element=8;
    cout<<searchElement(arr,6,element);

}