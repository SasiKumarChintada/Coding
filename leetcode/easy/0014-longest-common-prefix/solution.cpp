class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string first=strs[0]; //flower
        string res="";
        for(int i=1;i<strs.size();i++){ //i=1
            string rem=strs[i]; // flow
            for(int j=0;j<rem.size();j++){ 
                if(first[j]==rem[j]){// f=f
                    res+=first[j];// f
                }
                else{
                    break;
                }
            }
            first=res;
            res="";
            //cout<<first<<endl;
        }
        return first;
    }
};