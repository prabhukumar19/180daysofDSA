#include<iostream>
using namespace std;
int main(){

int n=5;
cout<<"Enter the number : "<<endl;
cin>>n;
for(int i=1; i<=n; i++){
    char ch='A'+i-1;
    for(int s=1; s<=n-i; s++){
        cout<<" ";
    }
    for(int j=1; j<=i; j++){
        cout<<ch;
    }
   
    cout<<endl;
}

return 0;

}