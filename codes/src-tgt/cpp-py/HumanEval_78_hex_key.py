### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long hex_key(std::string num) {
    std::string primes = "2357BD";
    int total = 0;
    for (int i = 0; i < num.length(); i++) {
        if (primes.find(num[i]) != std::string::npos) {
            total++;
        }
    }
    return total;
}


### Python version

def hex_key(num: str) -> int:
    primes = ('2', '3', '5', '7', 'B', 'D')
    total = 0
    for i in range(0, len(num)):
        if num[i] in primes:
            total += 1
    return total
