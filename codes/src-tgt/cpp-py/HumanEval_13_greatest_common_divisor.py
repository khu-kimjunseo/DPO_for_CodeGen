### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long greatest_common_divisor(long a, long b) {
    while (b) {
        long temp = a % b; a = b; b = temp;
    }
    return a;
}


### Python version

def greatest_common_divisor(a: int, b: int) -> int:
    while b:
        a, b = b, a % b
    return a
