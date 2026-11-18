# CARWASH

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Car Wash

There are $N$ cars and a car wash with $M$ stations. Every car goes through all stations in order, from station $1$ to station $M$, and every station serves the cars in order, from car $1$ to car $N$.
All cars are ready at time $0$.

A car starts at a station immediately, as soon as it has finished the previous station (if it exists) and the previous car (if it exists) has finished this station. In particular, car $1$ starts at station $1$ at time $0$.
Moving between stations takes no time, and there is unlimited room to wait.

Washing a car at a station normally takes $1$ minute.
However, you are given $K$ distinct pairs $(X_i, Y_i)$: car $X_i$ takes $2$ minutes at station $Y_i$.

Find the time at which car $N$ finishes station $M$.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line of each test case contains three space-separated integers $N$, $M$ and $K$ — the number of cars, the number of stations and the number of slow pairs. The next $K$ lines describe the slow pairs. The $i$-th of these lines contains two space-separated integers $X_i$ and $Y_i$, denoting that car $X_i$ takes $2$ minutes at station $Y_i$.
### Output Format

For each test case, output on a new line the time at which car $N$ finishes station $M$.

### Constraints
- $1 \leq T \leq 10^5$
- $2 \leq N, M \leq 10^9$
- $1 \leq K \leq \min(N \cdot M, 2 \cdot 10^5)$
- $1 \leq X_i \leq N$ and $1 \leq Y_i \leq M$
- All pairs $(X_i, Y_i)$ are distinct.
- The sum of $K$ over all test cases does not exceed $2 \cdot 10^5$.
### Sample 1:
Input
Output

```
5
2 2 3
2 2
2 1
1 1
3 2 3
2 1
1 2
3 1
3 3 5
2 3
1 3
3 2
3 1
1 1
1000000000 1000000000 5
7 300000000
500 2
7 500000000
123456 700000000
999999999 1000000000
1000000000 1000000000 6
999999999 500000000
999999999 271828
31415 1000000000
42 1000000000
42 271828
999999999 500000001

```

```
6
6
8
2000000003
2000000003

```

### Explanation:

 **Test case $1$:**  The process is as follows:

- Car $1$ starts station $1$. $(1, 1)$ is a slow pair, so it finishes at $2$.
- At $2$, car $1$ starts station $2$, while car $2$ starts station $1$.
- At $3$, car $1$ finishes station $2$.
- At $4$, car $2$ finishes station $1$ (because $(2, 1)$ is slow), and immediately starts station $2$.
- $(2, 2)$ is also slow, so this takes an additional two seconds. Car $2$ finishes station $2$ at time $6$.

 **Test case $2$:**  Car $1$ finishes stations $1, 2$ at times $1, 3$ respectively; car $2$ at times $3, 4$; and car $3$ at times $5, 6$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-18T15:11:10.216Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n,m;
	    cin>>n>>m;
	    int k;
	    cin>>k;
	    vector<pair<int,int>>a(k);
	    for(int i=0;i<k;i++){
	        cin>>a[i].first>>a[i].second;
	    }
	    sort(a.begin(),a.end());
	    vector<int>d;
	    for(int i=0;i<k;i++){
	        int y=a[i].second;
	        auto it=std::upper_bound(d.begin(), d.end(), y);
	        if(it==d.end()){
	            d.push_back(y);
	        }
	        else{
	            *it=y;
	        }
	    }
	    long long ans=(n+m-1)+d.size();
	    cout<<ans<<endl;
	}

}

```

---

[View on CodeChef](https://www.codechef.com/problems/CARWASH)