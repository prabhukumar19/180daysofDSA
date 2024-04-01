#include<iostream>
using namespace std;

string defaningAddress(string s){
    string ans;
    int index=0;
    while(index<s.size()){
        if(s[index]=='.'){
            ans+="[.]";
        }else {
            ans+=s[index];
        }
        index++;
    }
    return ans;
}
int main(){
    string input="1.1.1";
    cout<<defaningAddress(input)<<endl;
    return 0;
}