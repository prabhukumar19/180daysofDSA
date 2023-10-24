class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
       sort(position.begin(),position.end());
        int n = position.size(); //Leetcode Problem
        int start = 0, end = position[n-1] - position[0]; 
        
        while(start < end){
            int mid = start+(end-start+1)/2;
            int count = 1, prev = position[0];
            
            for(int i = 1; i < n; i++){
                if(position[i] - prev >= mid){
                    count++;
                    prev = position[i];
                }
            }
            
            if(count >= m)
                start = mid;
            else
                end = mid - 1;
        }
        
        return start;
    }
};