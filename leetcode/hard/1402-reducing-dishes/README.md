# Reducing Dishes

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

A chef has collected data on the `satisfaction` level of his `n` dishes. Chef can cook any dish in 1 unit of time.

 **Like-time coefficient**  of a dish is defined as the time taken to cook that dish including previous dishes multiplied by its satisfaction level i.e. `time[i] * satisfaction[i]`.

Return the maximum sum of  **like-time coefficient** that the chef can obtain after preparing some amount of dishes.

Dishes can be prepared in  **any** order and the chef can discard some dishes to get this maximum value.

 

Original
C++
 **Example 1:** 

```
Input: satisfaction = [-1,-8,0,5,-9]
Output: 14
Explanation: After Removing the second and last dish, the maximum total like-time coefficient will be equal to (-1 *1 + 0* 2 + 5*3 = 14).
Each dish is prepared in one unit of time.
```

 **Example 2:** 

```
Input: satisfaction = [4,3,2]
Output: 20
Explanation: Dishes can be prepared in any order, (2 *1 + 3* 2 + 4*3 = 20)

```

 **Example 3:** 

```
Input: satisfaction = [-1,-4,-5]
Output: 0
Explanation: People do not like the dishes. No dish is prepared.

```

 

 **Constraints:** 

- n == satisfaction.length
- 1 <= n <= 500
- -1000 <= satisfaction[i] <= 1000

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 54.30%)  
**Memory:** 11.4 MB (beats 88.37%)  
**Submitted:** 2026-11-27T18:07:47.863Z  

```cpp
class Solution {
public:
    int maxSatisfaction(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int maxi=0;
        for(int i=0;i<n;i++){
            int sum=0;
            int k=1;
            for(int j=i;j<n;j++){
                sum+=nums[j]*(k);
                maxi=max(sum,maxi);
                k++;
            }
        }
        return maxi;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reducing-dishes/)