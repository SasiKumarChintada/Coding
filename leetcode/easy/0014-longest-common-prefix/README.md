# Longest Common Prefix

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string `""`.

 

 **Example 1:** 

```
Input: strs = ["flower","flow","flight"]
Output: "fl"

```

 **Example 2:** 

```
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

```

 

 **Constraints:** 

- 1 <= strs.length <= 200
- 0 <= strs[i].length <= 200
- strs[i] consists of only lowercase English letters if it is non-empty.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 11.8 MB (beats 80.25%)  
**Submitted:** 2026-10-26T17:53:35.878Z  

```cpp
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string first=strs[0]; //flower
        string res="";
        for(int i=1;i<strs.size();i++){ //i=1
            string rem=strs[i]; // flow
            for(int j=0;j<rem.size();j++){ 
                if(first[j]==rem[j]){// f=f
                    res+=first[j];// f
                }
                else{
                    break;
                }
            }
            first=res;
            res="";
            //cout<<first<<endl;
        }
        return first;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-common-prefix/)