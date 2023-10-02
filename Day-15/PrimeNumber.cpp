#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    int i=2;
    bool isPrime=true;

    while(i<=n/2){
        if(n%i==0){
           isPrime=false;
           break;
        }
        i++;
    }
    if(isPrime){
        cout<<"Prime Number";
    }
    else {
        cout<<"Not a Prime Number";
    }
    return 0;
}