class Solution {
public:
    int countSuffix(vector<int>& nums, vector<int>& target) {
        int n=nums.size();
        int cnt=0;
        vector<int>snums=nums;
        vector<int>starget=target;
        sort(snums.begin(),snums.end());
        sort(starget.begin(),starget.end());
        if(snums!=starget){
           return 0;
        }
        int p=n-1;
        for(int i=0;i<n;i++){
            if(nums[i]!=target[i]){
                p=i;
                break;
            }
        }
        int s=n-1;
        while(s>0 && target[s-1] >=target[s]){
            s--;
        }
        if(s<=p){
            return p-s+1;
        }
        return 0;
    }
};