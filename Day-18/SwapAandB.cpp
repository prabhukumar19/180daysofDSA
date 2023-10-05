#include<iostream>
using namespace std;

void swapNumber(int a, int b){
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}
int main(){

    int n1, n2;
    cout<<"Enter your numbers : "<<endl;
    cin>>n1>>n2;
    swapNumber(n1, n2);
    
    return 0;
}