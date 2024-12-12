### Python version

def special_factorial(n: int) -> int:
    fact_i = 1
    special_fact = 1
    for i in range(1, n+1):
        fact_i *= i
        special_fact *= fact_i
    return special_fact

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long special_factorial(long n) {
    long fact_i = 1;
    long special_fact = 1;
    for(long i = 1; i <= n; i++) {
        fact_i *= i;
        special_fact *= fact_i;
    }
    return special_fact;
}

