#include<iostream>
using namespace std;

int cube(int n){
    int cube=n*n*n;
    return cube;
}
int main(){

    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    cout<<cube(n);
    return 0;
}