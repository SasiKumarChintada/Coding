# Minimum Insertions to Balance a Parentheses String

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given a parentheses string `s` containing only the characters `'('` and `')'`. A parentheses string is  **balanced**  if it can be formed using the following rules:

- The empty string is balanced.
- If A is balanced, then '(' + A + '))' is balanced.
- If A and B are balanced, then their concatenation is balanced.

In other words, every left parenthesis `'('` must have a corresponding pair of two consecutive right parentheses `'))'` that comes after it, and every right parenthesis must belong to exactly one such matching pair.

For example, `"())"`, `"())(())))"` and `"(())())))"` are balanced, while `")()"`, `"()))"` and `"(()))"` are not balanced.

You can insert the characters `'('` and `')'` at any position of the string to balance it if needed.

Return the  **minimum**  number of insertions needed to make `s` balanced.

 

 **Example 1:** 

 **Input:**  s = "(()))"

 **Output:**  1

 **Explanation:** 

The second `'('` is matched with two consecutive `')'`, but the first `'('` has only one matching `')'`. We need to insert one more `')'` at the end to make the string `"(())))"`, which is balanced.

 **Example 2:** 

 **Input:**  s = "())"

 **Output:**  0

 **Explanation:** 

The string is already balanced because its `'('` is followed by two consecutive `')'`, and both right parentheses belong to that matching pair.

 **Example 3:** 

 **Input:**  s = "))())("

 **Output:**  3

 **Explanation:** 

Insert `'('` at the beginning to match the first `'))'`, and insert `'))'` at the end to match the last `'('`. Three insertions are needed in total.

 

 **Constraints:** 

- 1 <= s.length <= 105
- s consists of '(' and ')' only.

## Solution

**Language:** C++  
**Runtime:** 9 ms (beats 22.88%)  
**Memory:** 15.5 MB (beats 83.78%)  
**Submitted:** 2026-10-30T18:46:08.236Z  

```cpp
class Solution {
public:
    int minInsertions(string s) {
        int n=s.size();
        int res=0;
        int count=0;
        int i=0;
        while(i<n){
            if(s[i]=='('){
                count++;
                i++;
            }
            else{
                if(count>0){
                    count--;
                }
                else{
                    res++;
                }
                if(i+1<n && s[i+1]==')'){
                    i+=2;
                }
                else{
                    res++;
                    i++;
                }
            }
        }
        return res+ count*2;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string/)