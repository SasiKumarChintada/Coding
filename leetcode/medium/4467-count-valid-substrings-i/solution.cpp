class Solution {
public:
    long long countValidSubstrings(string s) {
        long long ans=0;
        unordered_map<char,int>freq;
        int l=0;
        for(int r=0;r<s.size();r++){
            freq[s[r]]++;
            while(r-l+1>=3 && s[r-2]=='a' && s[r-1]=='b' && s[r]=='c'){
                l++;
            }
            ans+=r-l+1;
        }
        return ans;
    }
};