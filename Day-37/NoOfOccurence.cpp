#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(12);
    v.push_back(15);
    v.push_back(15);
    cout<<count(v.begin(),v.end(),15);
}