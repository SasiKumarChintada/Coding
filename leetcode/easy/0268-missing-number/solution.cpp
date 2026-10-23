class Solution {
public:
    int missingNumber(vector<int>& arr) {
        // cyclic sort
        int n=arr.size();
        int i=0;
        while(i<n){
            if(arr[i]>=n){
                i++;
                continue;
            }
            if(arr[i]!=i){
                swap(arr[i],arr[arr[i]]);
            }
            else i++;
        }
        for(int i=0;i<n;i++){
            if(i!=arr[i]) return i;
        }
        return n;
    }
};