#include<iostream>
using namespace std;
int firstRepeated(int arr[], int n) {
        // code here
        for(int i=0; i<n; i++){
           for(int j=i+1; j<n; j++){
               if(arr[i]==arr[j]){
                   return i;
               }
           }
        }
        return -1;
}
int LastRepeated(int arr[], int n) {
        // code here
        for(int i=n-1; i>0; i--){
           for(int j=n-i; j>0; j--){
               if(arr[i]==arr[j]){
                   return i;
               }
           }
        }
        return -1;
}

    int main(){
        int arr[]={1, 5, 3, 4, 3, 5, 6};
        int first=firstRepeated(arr, 7);
        int last=LastRepeated(arr, 7);
        cout<<"First Occurrence : "<<first<<endl;
        cout<<"Last Occurrence : "<<last;
    }