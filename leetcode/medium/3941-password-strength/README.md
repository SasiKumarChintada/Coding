# Password Strength

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given a string `password`.

The  **strength**  of the password is calculated based on the following rules:

- 1 point for each distinct lowercase letter ('a' to 'z').
- 2 points for each distinct uppercase letter ('A' to 'Z').
- 3 points for each distinct digit ('0' to '9').
- 5 points for each distinct special character from the set "!@#$".

Each character contributes  **at most**  once, even if it appears multiple times.

Return an integer denoting the strength of the password.

 

Original
C++
 **Example 1:** 

 **Input:**  password = "aA1!"

 **Output:**  11

 **Explanation:** 

- The distinct characters are 'a', 'A', '1' and '!'.
- Thus, the strength = 1 + 2 + 3 + 5 = 11.

 **Example 2:** 

 **Input:**  password = "bbB11#"

 **Output:**  11

 **Explanation:** 

- The distinct characters are 'b', 'B', '1' and '#'.
- Thus, the strength = 1 + 2 + 3 + 5 = 11.​​​​​​​

 

 **Constraints:** 

- 1 <= password.length <= 105
- password consists of lowercase and uppercase English letters, digits, and special characters from "!@#$".

## Solution

**Language:** C++  
**Runtime:** 27 ms (beats 22.95%)  
**Memory:** 17.6 MB (beats 29.32%)  
**Submitted:** 2026-11-23T19:30:16.841Z  

```cpp
class Solution {
public:
    int passwordStrength(string s) {
        int n=s.size();
        int small=0,big=0,dig=0,spe=0;
        unordered_map<char,int>freq;
        for(int i=0;i<n;i++){
            freq[s[i]]++;
            if(s[i]>='a' && s[i]<='z' && freq[s[i]]==1){
                small++;
            }
            else if(s[i]>='A' && s[i]<='Z' && freq[s[i]]==1){
                big+=2;
            }
            else if(s[i]>='0' && s[i]<='9' && freq[s[i]]==1){
                dig+=3;
            }
            else if((s[i]=='!' || s[i]=='@' || s[i]=='#' || s[i]=='$' ) && freq[s[i]]==1){
                spe+=5;
            }
        }
        return small+big+dig+spe;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/password-strength/)