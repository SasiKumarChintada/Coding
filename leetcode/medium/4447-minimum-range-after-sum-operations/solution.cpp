class Solution {
public:
    int minRange(int a, int b, int c) {
        int max0=max(a,max(b,c));
        int min0=min(a,min(b,c));
        int ans0=max0-min0;
        //a
        int newa=b+c;
        int max1=max(newa,max(b,c));
        int min1=min(newa,min(b,c));
        int ans1=max1-min1;
        //b
        int newb=a+c;
        int max2=max(newb,max(a,c));
        int min2=min(newb,min(a,c));
        int ans2=max2-min2;
        //c
        int newc=a+b;
        int max3=max(newc,max(a,b));
        int min3=min(newc,min(a,b));
        int ans3=max3-min3;
        return min(ans0,min(ans1,min(ans2,ans3)));
    }
};