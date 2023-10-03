#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number : "<<endl;
    cin>>n;
    int mul=1;
    int ans=0;
    // while(n!=0){
    //     int rem=n%2;
    //     ans=ans+rem*mul;
    //     n/=2;
    //     mul*=10;
    // }

    for(int i=n; i>0; i--){
        int rem=n%2;
        ans=ans+rem*mul;
        n=n/2;
        mul=mul*10;
    }
    cout<<"Binary Number is : "<<ans;
    return 0;
}