#include<iostream>
using namespace std;

  long long squaresInChessBoard(long long N) {
        // code here
        long long sum=0;

       for(long long i=N;i>0;i--){

           sum=sum+i*i;

       }
       return sum;
}
int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<squaresInChessBoard(n);
}