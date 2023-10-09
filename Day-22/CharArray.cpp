#include<iostream>
using namespace std;

int main(){

    char alphabets[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int size=sizeof(alphabets)/sizeof(char);
    for(int i=0; i<size; i++){
        cout<<alphabets[i]<<" ";
    }
}