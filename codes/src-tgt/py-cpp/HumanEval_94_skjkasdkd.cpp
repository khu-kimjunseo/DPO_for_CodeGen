### Python version

from typing import List

def skjkasdkd(lst: List[int]) -> int:
    def isPrime(n):
        for i in range(2,int(n**0.5)+1):
            if n%i==0:
                return False

        return True
    maxx = 0
    i = 0
    while i < len(lst):
        if(lst[i] > maxx and isPrime(lst[i])):
            maxx = lst[i]
        i+=1
    result = sum(int(digit) for digit in str(maxx))
    return result

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long skjkasdkd(std::vector<long> lst) {
    auto isPrime = [](long n) -> bool {
        for(long i=2;i<=sqrt(n);i++) {
            if(n%i==0) return false;
        }
        return true;
    };
    long maxx = 0;
    for(auto i:lst) {
        if(i>maxx && isPrime(i)) maxx = i;
    }
    long result = 0;
    std::string s = std::to_string(maxx);
    for(auto c:s) result += c-'0';
    return result;
}

