class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& locked, int k) {
        int n=nums.size();
        int unlocks=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            if(locked[i]==1){
                if(nums[i]!=i+1 || maxi>i+1){
                    unlocks++;
                }
            }
            maxi=max(maxi,nums[i]);
        }
        if(unlocks>k) return -1;
        int swaps=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]>nums[j]){
                    swaps++;
                }
            }
        }
        return unlocks+swaps;
    }
};