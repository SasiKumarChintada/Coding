# UNPALIN

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Unpalindrome

You are given an array $A$ of length $N$, where $1 \leq A_i \leq N$.

You would like to choose an integer $x$ ($1 \leq x \leq N$) and delete  **every**  occurrence of $x$ from $A$, keeping the remaining elements in order.
Note that $x$ does not need to occur in $A$.

Determine whether you can choose $x$ so that the resulting array is  **not**  a palindrome.
If it's possible, also find any such value $x$.

An array $B$ of length $M$ is said to be a palindrome if $B_i = B_{M+1-i}$ for every $1 \le i \le M$.
In particular, the empty array $(M = 0)$ is considered to be a palindrome.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of two lines of input. The first line of each test case contains a single integer $N$, the length of the array. The second line contains $N$ space-separated integers $A_1, A_2, \ldots, A_N$, denoting the array.
### Output Format

For each test case, output on a new line:

- NO, if no such $x$ exists;
- otherwise, YES followed by a space and a suitable value of $x$. If there are several, output any of them.

Each letter of `YES` and `NO` may be printed in either uppercase or lowercase.

### Constraints
- $1 \leq T \leq 10^5$
- $3 \leq N \leq 2 \cdot 10^5$
- $1 \leq A_i \leq N$
- The sum of $N$ over all test cases won't exceed $2 \cdot 10^5$.
### Sample 1:
Input
Output

```
4
6
1 3 6 1 6 3
6
2 1 6 1 2 2
5
1 2 3 5 4
5
5 2 4 2 5

```

```
YES 3
YES 6
YES 2
NO

```

### Explanation:

 **Test case $1$:**  Deleting $3$ leaves $[1, 6, 1, 6]$, which is not a palindrome.

 **Test case $4$:**  No matter which value is deleted from the array, it can be verified that the resulting sequence is a palindrome.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-18T15:01:27.871Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

}

```

---

[View on CodeChef](https://www.codechef.com/problems/UNPALIN)