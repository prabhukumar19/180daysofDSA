#include<iostream>
using namespace std;

  bool isUgly(int n) {
        if (n < 1)
        {
            return false;
        }
        int uglyPrimes[] = { 2, 3, 5 };
        for (int prime : uglyPrimes)
        {
            while (n % prime == 0)
            {
                n /= prime;
            }
        }
        return n == 1;
    }
int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<isUgly(n);
}