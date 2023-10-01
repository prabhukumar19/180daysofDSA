#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;

    for(int i=0; i<=n; i++){
        int value=1;
        for(int s=1; s<=n-i; s++){
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<value;
            value++;
        }
        cout<<endl;
    }

    return 0;
}