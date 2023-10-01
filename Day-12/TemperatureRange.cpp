#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter temperature "<<endl;
    cin>>n;
    if(n>70 && n<90){
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
}