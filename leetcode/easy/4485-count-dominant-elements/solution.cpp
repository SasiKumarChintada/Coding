class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int n=nums.size();
        int dom=0;
        if(n==1) return 1;
        if(nums[0]>=nums[1]) dom++;
        if(nums[n-1]>=nums[n-2]) dom++;
        for(int i=1;i<n-1;i++){
            if(nums[i]*2 >= nums[i-1]+nums[i+1]){
                dom++;
            }
        }
        return dom;
    }
};