class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int n=rain.size();
        vector<string>res;
        int al=0,bob=0;
        for(int i=0;i<n-1;i++){
            if(rain[i]==1 && rain[i+1]==1){
                if(al<=bob){
                    res.push_back("Alice");
                    al++;
                } 
                else{
                    res.push_back("Bob");
                    bob++;
                } 
            }
            else if(rain[i]==1 && rain[i+1]==0){
                res.push_back("Bob");
                bob++;
            }
            else{
                res.push_back("None");
            }
        }
        if(rain[n-1]==1){
             res.push_back("Bob");
        }
        else{
            res.push_back("None");
        }
        return res;
    }
};