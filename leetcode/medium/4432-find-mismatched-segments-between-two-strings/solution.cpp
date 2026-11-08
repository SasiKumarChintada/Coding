class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        int n=s1.size();
        vector<vector<string>>ans;
        string k="",l="";
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                k+=s1[i];
                l+=s2[i];
            }
            else{
                if(!k.empty()){
                    ans.push_back({k,l});
                    k.clear();
                    l.clear();
                }
            }
        }
        if(!k.empty()){
            ans.push_back({k,l});
        }
        return ans;
    }
};