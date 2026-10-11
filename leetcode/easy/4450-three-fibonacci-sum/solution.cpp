class Solution {
public:
    bool threeFibonacciSum(int n) {
        long long f1=0;
        long long f2=1;
        long long f3=1;
        while(true){
            long long sum=f1+f2+f3;
            if(sum==n) return true;
            if(sum>n){
                return false;
            }
            long long next=f2+f3;
            f1=f2;
            f2=f3;
            f3=next;
        }
    }
};