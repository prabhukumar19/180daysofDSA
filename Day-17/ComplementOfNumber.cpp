#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    int ans=0;
    int mul=1;
        while(n!=0){
            int rem=n%2;
            int bit=rem^1;
            ans=ans+bit*mul;
            mul=mul*2;
            n=n/2;
        }
        cout<<ans;
    return 0;
}