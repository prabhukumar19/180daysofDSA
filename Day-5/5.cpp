#include<iostream>
using namespace std;
int main(){
    int sqr;
    int sum=0;
    for(int i=1; i<10; i++){
        sqr=i*i;
        sum=sum+sqr;
    }
    cout<<sum;
    return 0;
}