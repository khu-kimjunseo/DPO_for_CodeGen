### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long sum_to_n(long n) {
    return (n * (n + 1)) / 2;
}


### Python version

def sum_to_n(n: int) -> int:
    return sum(range(n + 1))
