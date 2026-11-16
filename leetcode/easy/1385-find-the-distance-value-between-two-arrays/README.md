# Find the Distance Value Between Two Arrays

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given two integer arrays `arr1` and `arr2`, and an integer `d`.

An element `arr1[i]` is called  **far**  when every element `arr2[j]` satisfies `|arr1[i] - arr2[j]| > d`. In other words, no element of `arr2` lies within distance `d` of it.

Return the  **distance**  value, which is the number of  **far**  elements in `arr1`.

 

Original
C++
 **Example 1:** 

 **Input:**  arr1 = [4,5,8], arr2 = [10,9,1,8], d = 2

 **Output:**  2

 **Explanation:** 

- 4 is far. Its nearest value in arr2 is 1, and |4 - 1| = 3, which is greater than d = 2.
- 5 is far. Its nearest value in arr2 is 8, and |5 - 8| = 3, which is greater than d = 2.
- 8 is not far, because |8 - 8| = 0 is at most d = 2.
- Two elements are far, so the distance value is 2.

 **Example 2:** 

 **Input:**  arr1 = [1,4,2,3], arr2 = [-4,-3,6,10,20,30], d = 3

 **Output:**  2

 **Explanation:** 

- 1 is far. Its nearest value in arr2 is -3, and |1 - (-3)| = 4, which is greater than d = 3.
- 2 is far. Its nearest value in arr2 is 6, and |2 - 6| = 4, which is greater than d = 3.
- 4 is not far, because |4 - 6| = 2 is at most d = 3.
- 3 is not far, because |3 - 6| = 3 is at most d = 3.
- Two elements are far, so the distance value is 2.

 **Example 3:** 

 **Input:**  arr1 = [2,1,100,3], arr2 = [-5,-2,10,-3,7], d = 6

 **Output:**  1

 **Explanation:** 

- 100 is far. Its nearest value in arr2 is 10, and |100 - 10| = 90, which is greater than d = 6.
- 2 is not far, because |2 - (-2)| = 4 is at most d = 6.
- 1 is not far, because |1 - (-2)| = 3 is at most d = 6.
- 3 is not far, because |3 - 7| = 4 is at most d = 6.
- One element is far, so the distance value is 1.

 

 **Constraints:** 

- 1 <= arr1.length, arr2.length <= 500
- -1000 <= arr1[i], arr2[j] <= 1000
- 0 <= d <= 100

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 16.4 MB (beats 78.47%)  
**Submitted:** 2026-11-16T17:30:24.883Z  

```cpp
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans=0;
        for(int i=0;i<arr1.size();i++){
            bool isThere=false;
            for(int j=0;j<arr2.size();j++){
                if(abs(arr1[i]-arr2[j])<=d){
                    isThere=true;
                    break;
                }
            }
            if(!isThere) ans++;
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/find-the-distance-value-between-two-arrays/)