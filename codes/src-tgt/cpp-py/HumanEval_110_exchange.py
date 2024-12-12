### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string exchange(std::vector<long> lst1, std::vector<long> lst2) {
    int odd = 0;
    int even = 0;
    for (auto i : lst1) {
        if (i%2 == 1) {
            odd++;
        }
    }
    for (auto i : lst2) {
        if (i%2 == 0) {
            even++;
        }
    }
    if (even >= odd) {
        return "YES";
    }
    return "NO";
}


### Python version

from typing import List

def exchange(lst1: List[int], lst2: List[int]) -> str:
    odd = 0
    even = 0
    for i in lst1:
        if i%2 == 1:
            odd += 1
    for i in lst2:
        if i%2 == 0:
            even += 1
    if even >= odd:
        return "YES"
    return "NO"
