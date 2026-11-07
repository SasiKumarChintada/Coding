class Solution {
public:
    bool canRemoveAll(vector<int>& types, vector<int>& colors, vector<int>& group) {
        int n=types.size();
        vector<pair<int,int>>b;
        vector<int>count;
        for(int i=0;i<n;i++){
            int t=types[i];
            int c=colors[i];
            if(!b.empty() && b.back().first==t && b.back().second==c){
                count.back()++;
            }
            else{
                b.push_back({t,c});
                count.push_back(1);
            }
            while(!b.empty() && count.back()==group[b.back().first]){
                b.pop_back();
                count.pop_back();
                while(b.size()>=2 && b.back()==b[b.size()-2]){
                    int cnt=count.back();
                    count.pop_back();
                    b.pop_back();
                    count.back()+=cnt;
                }
            }
        }
        return b.empty();
    }
};