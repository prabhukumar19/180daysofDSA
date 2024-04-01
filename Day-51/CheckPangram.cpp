#include<iostream>
#include<vector>

using namespace std;

 bool checkIfPangram(string sentence) {
        vector<bool>alpha(26,0);
        for(int i=0; i<sentence.size(); i++){
            alpha[sentence[i]-'a']=1;
        }
        for(int i=0; i<26; i++){
            if(alpha[i]==0) return 0;
        }

        return 1;
    }

int main(){
    string sentence="thequickbrownfoxjumpsoverthelazydog";
    int ans=checkIfPangram(sentence);
    if(ans==1){
        cout<<"Present every alphabets in the sentence: "<<sentence<<endl;
    }else {
        cout<<"Every alphabets is not present in the sentence: "<<sentence<<endl;
    }
    return 0;
}