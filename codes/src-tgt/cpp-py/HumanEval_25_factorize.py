### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> factorize(long n) {
    std::vector<long> fact;
    long i = 2;
    while (i <= sqrt(n) + 1) {
        if (n % i == 0) {
            fact.push_back(i);
            n /= i;
        } else {
            i++;
        }
    }
    if (n > 1) {
        fact.push_back(n);
    }
    return fact;
}


### Python version

from typing import List

def factorize(n: int) -> List[int]:
    import math
    fact = []
    i = 2
    while i <= int(math.sqrt(n) + 1):
        if n % i == 0:
            fact.append(i)
            n //= i
        else:
            i += 1

    if n > 1:
        fact.append(n)
    return fact
