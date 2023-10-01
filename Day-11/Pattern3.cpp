#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        char value='A';
        for(int s=1; s<=n-i; s++){
            cout<<" ";
        }
        for(int j=2*i-1; j>=1; j--){
            cout<<value;
            value=value;
        }//Incomplete
        cout<<endl;
    }

    return 0;
}