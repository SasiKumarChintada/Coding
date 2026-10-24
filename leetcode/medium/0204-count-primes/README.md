# Count Primes

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer `n`, return  *the number of prime numbers that are strictly less than*  `n`.

 

 **Example 1:** 

```
Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

```

 **Example 2:** 

```
Input: n = 0
Output: 0

```

 **Example 3:** 

```
Input: n = 1
Output: 0

```

 

 **Constraints:** 

- 0 <= n <= 5 * 106

## Solution

**Language:** C++  
**Runtime:** 122 ms (beats 97.51%)  
**Memory:** 13.8 MB (beats 87.14%)  
**Submitted:** 2026-10-24T09:01:02.999Z  

```cpp
class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2)
            return 0;
        vector<bool> isPrime(n, true);
        isPrime[0] = false;
        isPrime[1] = false;
        for (int i = 4; i < n; i += 2) {
            isPrime[i] = false;
        }
        for (int i = 3; i * i < n; i += 2) {
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += 2 * i) {
                    isPrime[j] = false;
                }
            }
        }
        int count = 1;
        for (int i = 3; i < n; i += 2) {
            if (isPrime[i]) {
                count++;
            }
        }
        return count;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/count-primes/)