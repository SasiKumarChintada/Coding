# First Element with Unique Frequency

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer array `nums`.

Return an integer denoting the  **first**  element (scanning from left to right) in `nums` whose  **frequency**  is  **unique**. That is, no other integer appears the same number of times in `nums`. If there is no such element, return -1.

 

Original
C++
 **Example 1:** 

 **Input:**  nums = [20,10,30,30]

 **Output:**  30

 **Explanation:** 

- 20 appears once.
- 10 appears once.
- 30 appears twice.
- The frequency of 30 is unique because no other integer appears exactly twice.

 **Example 2:** 

 **Input:**  nums = [20,20,10,30,30,30]

 **Output:**  20

 **Explanation:** 

- 20 appears twice.
- 10 appears once.
- 30 appears 3 times.
- The frequency of 20, 10, and 30 are unique. The first element that has unique frequency is 20.

 **Example 3:** 

 **Input:**  nums = [10,10,20,20]

 **Output:**  -1

 **Explanation:** 

- 10 appears twice.
- 20 appears twice.
- No element has a unique frequency.

 

 **Constraints:** 

- 1 <= nums.length <= 105
- 1 <= nums[i] <= 105

## Solution

**Language:** C++  
**Runtime:** 186 ms (beats 74.32%)  
**Memory:** 289.5 MB (beats 79.77%)  
**Submitted:** 2026-11-25T19:49:22.172Z  

```cpp
class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        unordered_map<int,int>count;
        for(auto &p:freq){
            count[p.second]++;
        }
        for(int x:nums){
            if(count[freq[x]]==1) return x;
        }
        return -1;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/first-element-with-unique-frequency/)