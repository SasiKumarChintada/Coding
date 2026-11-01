class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        for(int i=0;i<n;i+=2){
            string s=to_string(nums[i])+to_string(nums[i+1]);
            mini=min(mini,stoi(s));
        }
        return mini;
    }
};