### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long starts_one_ends(long n) {
    if (n == 1) return 1;
    return 18 * pow(10, n - 2);
}


### Python version

def starts_one_ends(n: int) -> int:
    if n == 1: return 1
    return 18 * (10 ** (n - 2))
