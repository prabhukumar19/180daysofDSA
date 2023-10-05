#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    if(n==0){
        return 1;
    }
    for(int i=2; i<=n; i++){
        fact=fact*i;
    }
    return fact;
}

int calculateNCR(int n, int r)
{
    int ans= factorial(n) / (factorial(r) * factorial(n - r));
    return ans;
}

int main(){

    int n,r;
    cout<<"Enter your number : "<<endl;
    cin>>n>>r;
    cout<<"Answer of NCR is : "<<calculateNCR(n,r);
    return 0;
}