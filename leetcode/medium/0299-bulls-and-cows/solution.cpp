class Solution {
public:
    string getHint(string secret, string guess) {
        int n=secret.size();
        // same position count
        int same=0;
        for(int i=0;i<n;i++){
            if(secret[i]==guess[i]) same++;
        }
        unordered_map<char,int>freq;
        for(char x:secret){
            freq[x]++;
        }
        int diff=0;
        for(char y:guess){
            if(freq[y]>0){
                freq[y]--;
                diff++;
            } 
        }
        return to_string(same)+"A"+to_string(diff-same)+"B";
    }
};