#include<iostream>
using namespace std;

int size(string s){
    int size = 0;
    while(s[size] != '\0'){
        size++;
    }
    return size;
}

string reverse(string s){
    int start=0;
    int end=s.size()-1;
    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
    return s;
}

int main(){
    cout<<"String Practice:- "<<endl;
    string s="Prabhu";
    
    cout<<"Reversed String is :- "<<reverse(s)<<endl;
    cout<<"Size of String is :- "<<size(s);
    return 0;
}