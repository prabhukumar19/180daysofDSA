#include<iostream>
using namespace std;

int addDigits(int num) {
        
        while(num>9){
            int sum=0,rem;
            while(num!=0){
                rem=num%10;
                num/=10;
                sum+=rem;
            }
            num=sum;
        }
      
    return num;
}
int main(){
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    cout<<addDigits(n);
}