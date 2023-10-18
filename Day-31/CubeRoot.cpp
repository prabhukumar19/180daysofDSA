#include<iostream>
using namespace std;

int cubeRoot(int x) {
        // code here
         if (x <= 1)
        {
            return x;
        }
        long start = 1;
        long end = x;

        while (start < end - 1)
        {
            long mid = (start + end) / 2;
            long cube = mid * mid*mid;
            if (cube == x)
            {
                return mid;
            }
            else if (cube < x)
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

    int n=3;
    cout<<cubeRoot(n);
}