#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter the number : "<<endl;
cin>>n;
for(int i=1; i<=n; i++){
    int value=5;
    for(int s=1; s<=n-i; s++){
        cout<<" ";
    }
    for(int j=1; j<=i; j++){
        cout<<value;
        value--;
    }
    cout<<endl;
}

return 0;

}