#include<iostream>
using namespace std;

int convertToDecimal(int n){
    int mul=1;
    int ans=0;
     while(n!=0){
        int rem=n%10;
        ans=ans+rem*mul;
        n/=10;
        mul*=8;
    }
    return ans;
}

int convertToBinary(int n){
    int mul=1;
    int ans=0;
    while(n!=0){
        int rem=n%2;
        ans=ans+rem*mul;
        n=n/2;
        mul=mul*10;
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
    cout<<"Enter a Octal Number : "<<endl;
    cin>>n;
    int decimalNumber=convertToDecimal(n);
    int BinaryNumber=convertToBinary(decimalNumber);
    cout<<decimalNumber<<endl;
    cout<<"Binary Number is : "<<BinaryNumber;
    return 0;
}