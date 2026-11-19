class Solution {
public:
    int wateringPlants(vector<int>& p, int cap) {
        int n=p.size();
        int store=cap;
        int move=0;
        for(int i=0;i<n;i++){
            if(p[i]>cap){
                cap=store;
                move+=(2*i+1);
                cap-=p[i];
            }
            else{
                move++;
                cap-=p[i];
            }
        }
        return move;
    }
};