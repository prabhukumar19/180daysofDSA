#include<iostream>
using namespace std;

 int mySqrt(int x) {
        
        if (x <= 1)
        {
            return x;
        }
        long start = 1;
        long end = x;

        while (start < end - 1)
        {
            long mid = (start + end) / 2;
            long sqr = mid * mid;
            if (sqr == x)
            {
                return mid;
            }
            else if (sqr < x)
            {
                start = mid;
            }
            else
            {
                end = mid;
            }
        }
        return (int) start;
    }

int main(){
     int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<mySqrt(n);
}