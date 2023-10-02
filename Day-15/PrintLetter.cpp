#include<iostream>
using namespace std;
int main(){
    char c='A',x='a';
    int i=1,j=1;
    while(i<=26){
        cout<<c<<" ";
        i++;
        c++;
    }
    cout<<endl;
    while(j<=26){
        cout<<x<<" ";
        j++;
        x++; 
    }

    return 0;
}