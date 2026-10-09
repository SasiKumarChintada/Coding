class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        unordered_map<int,int>umap;
        vector<int>res;
        for(int x:arr){
            umap[x]++;
        }
        for(int i=0;i<arr.size();i++){
            if(umap[arr[i]]>1){
                res.push_back(arr[i]);
                umap[arr[i]]=0;
            }
                
        }
        return res;
    }
};