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
    cout<<"Count is : "<<count(v.begin(),v.end(),15)<<endl;
    cout<<"Min is : "<<*min_element(v.begin(),v.end())<<endl;
    cout<<"Max is : "<<*max_element(v.begin(), v.end());
}