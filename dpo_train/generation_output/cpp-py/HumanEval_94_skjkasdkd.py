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

### Python version

from typing import List

def skjkasdkd(lst: List[int]) -> int:
    return skjkasdkd(lst)

def skjkasdkd2(lst: List[int]) -> int:
    return skjkasdkd(lst)

def skjkasdkd3(lst: List[int]) -> int:
    return skjkasdkd(lst)

def skjkasdkd4(lst: List[int]) -> int:
    return skjkasdkd(lst)

def skjkasdkd5(lst: List[int]) -> int:
    return skjkasdkd(lst)

def skjkasdkd6(lst: List[int]) -> int:
    return skjkasdkd(lst)

def skjkasdkd7(lst: List[int]) -> int:
    return skjkasdkd(lst)

def skjkasdkd8(lst: List[int]) -> int:
    return skjkasdkd(lst)

def skjkasdkd9(lst: List[int]) -> int:
    return skjkasdkd(lst)

def skjkasdkd10(lst: List[int]) -> int:
    return skjkasdkd(lst)

def skjkasdkd11(lst: List[int]) -> int:
    return skjkasdkd(lst)

def skjkasdkd12(lst: List[int]) -> int:
    return skjkasdkd(lst)

def skjkasdkd13(lst: List[int]) -> int:
    return skjkasdkd(lst)

def skjkasdkd14(lst: List[int]) -> int:
    return skjkasdkd(lst)

def skjkasdkd15(lst: List[int]) -> int:
    return skjkasdkd(lst)

def skjkasdkd16(lst: List[int]) -> int:
    return skjkasdkd(lst)

def skjkasdkd17(lst: List[int]) -> int:
    return skjkasdkd(lst)

def skjkasdkd18(lst: List[int]) -> int:
    return skjkasdkd(lst)

def skjkasdkd19(lst: List[int]) -> int:
    return skjkasdkd(lst)

def skjkasdkd20(lst: List[int]) -> int:
    return skjkasdkd(lst)

def skjkasdkd21(lst: List[int]) -> int:
    return skjkasdkd(lst)

def skjkasdkd22(lst: List[int]) -> int:
    return skjkasdkd(lst)

def skjkasdkd23(lst: List[int]) -> int:
    return skjkasdkd(lst)

def skjkasdkd24(lst: List[int]) -> int:
    return skjkasdkd(lst)

def skjkasdkd25