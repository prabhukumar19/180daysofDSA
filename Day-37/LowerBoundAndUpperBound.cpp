#include <algorithm> // for lower_bound, upper_bound and sort
#include <iostream>
#include <bits/stdc++.h>
#include <vector> // for vector
using namespace std;
 
int main(){
    int numbers[] = { 5, 5, 5, 6, 6, 6, 7, 7 };
 
    vector<int> v(numbers, numbers + 8); // 5 5 5 6 6 6 7 7
 
    vector<int>::iterator lower, upper;
    lower = lower_bound(v.begin(), v.end(), 6);
    upper = upper_bound(v.begin(), v.end(), 6);
 
    cout << "lower_bound for 6 at index "
         << (lower - v.begin()) << '\n';
    cout << "upper_bound for 6 at index "
         << (upper - v.begin()) << '\n';
 
    return 0;
}