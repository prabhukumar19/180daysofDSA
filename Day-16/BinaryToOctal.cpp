#include<iostream>
using namespace std;

int convertToDecimal(int n){
    int mul=1;
    int ans=0;
    for(int i=n; i>0; i--){
         int rem=n%10;
         ans=ans+rem*mul;
         n/=10;
         mul*=2;
    }
    return ans;
}

int convertToOctal(int n){
    int mul=1;
    int ans=0;
    while(n!=0){
        int rem=n%8;
        ans=ans+rem*mul;
        n/=8;
        mul*=10;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter a Binary Number : "<<endl;
    cin>>n;
    int decimalNumber=convertToDecimal(n);
    int octalNumber=convertToOctal(decimalNumber);
    cout<<decimalNumber<<endl;
    cout<<"Octal Number is : "<<octalNumber;
    return 0;
}