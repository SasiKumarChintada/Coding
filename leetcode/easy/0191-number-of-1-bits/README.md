# Number of 1 Bits

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a positive integer `n`, write a function that returns the number of set bits in its binary representation (also known as the Hamming weight).

 

 **Example 1:** 

 **Input:**  n = 11

 **Output:**  3

 **Explanation:** 

The input binary string  **1011**  has a total of three set bits.

 **Example 2:** 

 **Input:**  n = 128

 **Output:**  1

 **Explanation:** 

The input binary string  **10000000**  has a total of one set bit.

 **Example 3:** 

 **Input:**  n = 2147483645

 **Output:**  30

 **Explanation:** 

The input binary string  **1111111111111111111111111111101**  has a total of thirty set bits.

 

 **Constraints:** 

- 1 <= n <= 231 - 1

 

 **Follow up:**  If this function is called many times, how would you optimize it?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.3 MB (beats 47.64%)  
**Submitted:** 2026-10-09T12:17:38.633Z  

```cpp
class Solution {
public:
    int hammingWeight(int n) {
        int cnt=0;
        for(int i=0;i<32;i++){
            if((n&(1<<i))>0) cnt++;
        }
        return cnt;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/number-of-1-bits/)