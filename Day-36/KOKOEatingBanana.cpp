class Solution {
public:
    int minEatingSpeed(vector<int>& arr, int h) {
        int start=1,end=0,ans,n=arr.size();
        long long sum=0;
        for(int i=0; i<n; i++){
            sum+=arr[i];
            end=max(end,arr[i]);
        }
        start=sum/h;
        if(start==0) {
            start=1;
        }
        while(start<=end){
            int mid=start+(end-start)/2;
            int total_time=0;
            for(int i=0; i<n; i++){
                total_time+=arr[i]/mid;
                if(arr[i]%mid){
                    total_time++;
                }
            }
            if(total_time>h){
                start=mid+1;
            }
            else {
                ans=mid;
                end=mid-1;
            }
        }
        return ans;
    }
};

int main(){
    cout<<"LeetCode Problem";
}