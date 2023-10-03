#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Binary Number : "<<endl;
    cin>>n;
    int mul=1;
    int ans=0;
    //int i=0;
    // while(n!=0){
    //     int rem=n%10;
    //     ans=ans+rem*mul;
    //     //ans=ans+pow(2,i++);
    //     n/=10;
    //     mul*=2;// We have to coment this if we use commented formula.
    // }
    // cout<<"Decimal Number is : "<<ans;

    for(int i=n; i>0; i--){
         int rem=n%10;
         ans=ans+rem*mul;
        //ans=ans+pow(2,i++);
        n/=10;
        mul*=2;
    }
   cout<<"Decimal Number is : "<<ans;
    return 0;
}