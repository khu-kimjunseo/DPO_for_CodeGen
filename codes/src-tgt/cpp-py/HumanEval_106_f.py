### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> f(long n) {
    std::vector<long> ret;
    for(long i=1;i<=n;i++) {
        if(i%2==0) {
            long x=1;
            for(long j=1;j<=i;j++) x*=j;
            ret.push_back(x);
        } else {
            long x=0;
            for(long j=1;j<=i;j++) x+=j;
            ret.push_back(x);
        }
    }
    return ret;
}


### Python version

from typing import List

def f(n: int) -> List[int]:
    ret = []
    for i in range(1,n+1):
        if i%2 == 0:
            x = 1
            for j in range(1,i+1): x *= j
            ret += [x]
        else:
            x = 0
            for j in range(1,i+1): x += j
            ret += [x]
    return ret
