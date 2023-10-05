#include<iostream>
using namespace std;

void swapNumbers(int a, int b, int c){
    int n=a;
    a=b;
    b=c;
    c=n;
    cout<<"n1 "<<a<<endl;
    cout<<"n2 "<<b<<endl;
    cout<<"n3 "<<c<<endl;
}
int main(){

    int n1, n2, n3;
    cout<<"Enter your numbers : "<<endl;
    cin>>n1>>n2>>n3;
    swapNumbers(n1, n2,n3);
    
    return 0;
}