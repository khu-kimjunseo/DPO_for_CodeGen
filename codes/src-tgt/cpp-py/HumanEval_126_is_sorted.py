### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool is_sorted(std::vector<long> lst) {
    std::map<long, long> count_digit;
    for (auto i: lst) {
        count_digit[i]++;
    }
    for (auto i: lst) {
        if (count_digit[i] > 2) {
            return false;
        }
    }
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i-1] > lst[i]) {
            return false;
        }
    }
    return true;
}


### Python version

from typing import List

def is_sorted(lst: List[int]) -> bool:
    count_digit = dict([(i, 0) for i in lst])
    for i in lst:
        count_digit[i]+=1
    if any(count_digit[i] > 2 for i in lst):
        return False
    if all(lst[i-1] <= lst[i] for i in range(1, len(lst))):
        return True
    else:
        return False
