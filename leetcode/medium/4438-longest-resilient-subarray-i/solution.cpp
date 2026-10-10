class Solution {
public:
    int resilientSubarray(vector<int>& nums, int k) {
        int n=nums.size();
        int max_len=0;
        int i=0;
        while(i<n){
            int r=nums[i]%k;
            int j=i;
            while(j<n && nums[j]%k==r){
                j++;
            }
            int window_size=j-i;
            int l=window_size;
            while(l>0){
                if(((l-1)*r)%k==0){
                    max_len=max(max_len,l);
                    break;
                }
                l--;
            }
            i=j;
        }
        return max_len;
        
    }
};