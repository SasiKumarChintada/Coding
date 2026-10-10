class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int n=nums.size();
        int p1=-1,p2=-1;
        int maxi=INT_MIN;
        bool found=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && nums[i]+nums[j]==target && nums[i]>nums[j]){
                    if(!found || nums[i]*nums[j]>maxi){
                        maxi=nums[i]*nums[j];
                        p1=i;
                        p2=j;
                        found=true;
                    }
                }
            }
        }
        return {p1,p2};
    }
};