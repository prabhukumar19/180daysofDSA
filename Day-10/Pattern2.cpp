#include<iostream>
using namespace std;
int main(){

int n=5;
cout<<"Enter the number : "<<endl;
cin>>n;
for(int i=1; i<=n; i++){
    char ch='A';
    for(int s=1; s<=n-i; s++){
        cout<<" ";
    }
    for(int j=1; j<=i; j++){
        cout<<ch;
    }
    ch=ch+1;
    cout<<endl;
}

return 0;

}