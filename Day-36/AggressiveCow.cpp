#include<iostream>
#include<vector>
using namespace std;

int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(),stalls.end()); //GFG Aggressive Cow problem
        int start=1;
        int end=stalls[n-1]-stalls[0];
        int ans;
        while(start<=end){
            int mid=start+(end-start)/2;
            int count=1;
            int position=stalls[0];
            for(int i=1; i<n; i++){
                if(position+mid<=stalls[i]){
                    count++;
                    position=stalls[i];
                }
            }
            if(count<k){
                end=mid-1;
            }
            else {
                ans=mid;
                start=mid+1;
            }
        }
        return ans;
}

int main(){
    int n=5;
    int k=3;
    vector<int> v={1,2,4,8,9};
    cout<<solve(n,k,v);
}