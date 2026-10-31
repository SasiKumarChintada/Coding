# Longest Valid Parentheses

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given a string containing just the characters `'('` and `')'`, return  *the length of the longest valid (well-formed) parentheses **substring*.

 

 **Example 1:** 

```
Input: s = "(()"
Output: 2
Explanation: The longest valid parentheses substring is "()".

```

 **Example 2:** 

```
Input: s = ")()())"
Output: 4
Explanation: The longest valid parentheses substring is "()()".

```

 **Example 3:** 

```
Input: s = ""
Output: 0

```

 

 **Constraints:** 

- 0 <= s.length <= 3 * 104
- s[i] is '(', or ')'.

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 53.60%)  
**Memory:** 10.2 MB (beats 91.48%)  
**Submitted:** 2026-10-31T19:53:11.922Z  

```cpp
class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.size();
        int open=0,close=0;
        int res=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(') open++;
            else close++;
            if(open==close){
                res=max(res,open+close);
            }
            else if(close>open){
                open=0;
                close=0;
            }
        }
        open=0,close=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='(') open++;
            else close++;
            if(open==close){
                res=max(res,open+close);
            }
            else if(open>close){
                open=0;
                close=0;
            }
        }
        return res;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-valid-parentheses/)