# Trapping Rain Water

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given `n` non-negative integers representing an elevation map where the width of each bar is `1`, compute how much water it can trap after raining.

 

Original
C++
 **Example 1:** 

```
Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.

```

 **Example 2:** 

```
Input: height = [4,2,0,3,2,5]
Output: 9

```

 

 **Constraints:** 

- n == height.length
- 1 <= n <= 2 * 104
- 0 <= height[i] <= 105

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 29.39%)  
**Memory:** 27.2 MB (beats 27.65%)  
**Submitted:** 2026-11-11T13:57:00.200Z  

```cpp
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>pre(n);
        pre[0]=height[0];
        for(int i=1;i<n;i++){
            pre[i]=max(pre[i-1],height[i]);
        }
        vector<int>suff(n);
        suff[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            suff[i]=max(suff[i+1],height[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=min(suff[i],pre[i])-height[i];
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/trapping-rain-water/)