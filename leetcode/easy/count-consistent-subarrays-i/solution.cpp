class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            int andu=nums[i];
            int mini=nums[i];
            for(int j=i+1;j<n;j++){
                andu=andu&nums[j];
                mini=min(mini,nums[j]);
                if(mini==andu) cnt++;
            }
        }
        return cnt;
    }
};