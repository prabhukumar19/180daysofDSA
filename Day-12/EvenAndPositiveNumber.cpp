#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    if(n%2==0 && n>0){
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
}