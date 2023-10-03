#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    int mul=1;
    int ans=0;
    while(n!=0){
        int rem=n%8;
        ans=ans+rem*mul;
        n/=8;
        mul*=10;
    }
    cout<<"Binary Number is : "<<ans;
    return 0;
}