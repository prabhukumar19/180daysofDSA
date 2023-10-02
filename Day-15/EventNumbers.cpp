#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    int i=1;

    //Using while Loop
    while(i<=n){
        if(i%2==0){
            cout<<i<<" ";
        }
        i++;
    }

    //Using Do while loop;

    do {
        if(i%2==0){
            cout<<i<<" ";
        }
        i++;
    } while(i<=n);
    return 0;
}