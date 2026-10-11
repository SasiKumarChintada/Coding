class Solution {
public:
    vector<int>Isprime(int n){
        vector<bool>prime(n+1,true);
        prime[0]=false,prime[1]=false;
        vector<int>res;
        for(int i=2;i*i<=n;i++){
            if(prime[i]){
                for(int p=i*i;p<=n;p+=i){
                    prime[p]=false;
                }
            }
        }
        for(int i=2;i<=n;i++){
            if(prime[i]) res.push_back(i);;
        }
        return res;
    }
    vector<int> maxPrimes(int n, int s) {
        vector<int>ans=Isprime(n);
        vector<int>fin;
        long long sum=0;
        for(int i=0;i<ans.size();i++){
            sum+=ans[i];
            if(sum<=s) fin.push_back(ans[i]);
            else break;
        }
        return fin;
    }
};