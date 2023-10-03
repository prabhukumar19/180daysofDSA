#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a octal number : "<<endl;
    cin>>n;
    int mul=1;
    int ans=0;
    while(n!=0){
        int rem=n%10;
        ans=ans+rem*mul;
        n/=10;
        mul*=8;
    }
    cout<<"Decimal Number is : "<<ans;
    return 0;
}