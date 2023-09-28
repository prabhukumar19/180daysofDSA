#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    int first=0;
    int second=1;
    cout<<first<<endl;
    cout<<second<<endl;
    for(int i=2; i<=n; i++){
        int ans=first+second;
        first=second;
        second=ans;
        cout<<ans<<endl;
    }
}