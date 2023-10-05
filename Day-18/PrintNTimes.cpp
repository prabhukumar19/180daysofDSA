#include<iostream>
using namespace std;

void printString(int n){
   for(int i=0; i<=n; i++){
    cout<<"Hello Prabhu"<<endl;
   }
}
int main(){

    int n;
    cout<<"Enter your number : "<<endl;
    cin>>n;
    printString(n);
    
    return 0;
}