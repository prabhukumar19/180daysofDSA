#include<iostream>
using namespace std;

bool isPalidrome(string s){
    int start=0;
    int end=s.size()-1;
    while(start<end){
        if(s[start]==s[end]){
            return true;
        }
        start++;
        end--;
    }
    return false;
}
int main(){
    string s="MOM";
    int res=isPalidrome(s);
    if(res==1){
        cout<<"String is Palidrome"<<endl;
    }
    else {
        cout<<"String is not Palidrome"<<endl;
    }

    return 0;
}