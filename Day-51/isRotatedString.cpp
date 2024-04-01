#include<iostream>
using namespace std;

void rotateClockWise(string &s){
        char c = s[s.size()-1];
        int i=s.size()-1;
        while(i>=0){
            s[i+1]=s[i];
            i--;
        }
        s[0]=c;
    }
    void rotateAntiClockwise(string &s){
        char c = s[0];
        int i=1;
        while(i<s.size()){
            s[i-1]=s[i];
            i++;
        }
        s[s.size()-1]=c;
    }
    bool isRotated(string str1, string str2)
    {
        if(str1.size()!=str2.size()) return 0;
        
        string clockwise, anticlockwise;
        clockwise=str1;
        rotateClockWise(clockwise);
        rotateClockWise(clockwise);
         if(clockwise==str2){
             return 1;
         }
         
         anticlockwise=str1;
         
        rotateAntiClockwise(anticlockwise);
        rotateAntiClockwise(anticlockwise);
          if(anticlockwise==str2){
             return 1;
         }
        
        return 0;
    }


int main(){
    string s1="amazon";
    string s2="azonam";

    int ans= isRotated(s1,s2);
    if(ans==1){
        cout<<"Rotated "<<endl;
    }
    else {
        cout<<"Not Rotated "<<endl;
    }
    return 0;
}