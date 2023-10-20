#include<iostream>
#include<math.h>
using namespace std;

bool isPerfectSquare(int num) {
        int end=num, start=1,mid;
        while(end-start>0){
            int mid = start + (end-start)/2;
            if(mid== sqrt(num)) return true;
            else if(mid>sqrt(num)) end = mid-1;
            else start=mid+1;
        }
        return start == sqrt(num);
}

int main(){
    int n=16;
    cout<<isPerfectSquare(n);//1 means true
}