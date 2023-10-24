#include<iostream>
using namespace std;
#include<vector>

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(12);
    v.push_back(15);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
}