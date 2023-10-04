#include<iostream>
using namespace std;

bool isPalindrome(int x) {
        long long int rev=0, digit;
        int temp=x;
        while(x>0){
            digit=x%10;
            rev=(rev*10)+digit;
            x=x/10;
        }
        if(temp==rev){
            return true;
        }
        else {
            return false;
        }
    }
int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<isPalindrome(n);
}