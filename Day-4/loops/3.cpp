#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
       if(i%4==0){
        cout<<i<<endl;
       }
    }
    return 0;
}