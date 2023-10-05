#include<iostream>
using namespace std;

void swapNumbers(int n1, int n2, int n3){
    int n=n1;
    n1=n2;
    n2=n3;
    n3=n;
    cout<<"n1 "<<n1<<endl;
    cout<<"n2 "<<n2<<endl;
    cout<<"n3 "<<n3<<endl;
}
int main(){

    int n1, n2, n3;
    cout<<"Enter your numbers : "<<endl;
    cin>>n1>>n2>>n3;
    swapNumbers(n1, n2,n3);
    return 0;
}