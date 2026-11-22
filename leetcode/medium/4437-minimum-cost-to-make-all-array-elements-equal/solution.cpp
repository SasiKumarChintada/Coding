class Solution {
public:
    long long minCost(vector<int>& nums) {
        int n=nums.size();
        long long ans=LLONG_MAX;
        int i=0;
        while(i<n){
            int j=i;
            while(j+1<n && nums[j+1]==nums[i]){
                j++;
            }
            if(!(i==0 && j==0) && !(i==n-1 && j==n-1)){
                long long len=j-i+1;
                long long cost = (n-len)*(long long)nums[i];
                ans=min(ans,cost);
            }
            i=j+1;
        }
       return ans; 
    }
};