### Python version

from typing import List

def strange_sort_list(lst: List[int]) -> List[int]:
    res, switch = [], True
    while lst:
        res.append(min(lst) if switch else max(lst))
        lst.remove(res[-1])
        switch = not switch
    return res

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
std::vector<long> strange_sort_list(std::vector<long> lst) {
    std::vector<long> res;
    std::sort(lst.begin(), lst.end());
    res.reserve(lst.size());
    for (long i = 0; i < lst.size(); i++) {
        res.push_back(lst[i]);
    }
    return res;
}

std::vector<long> strange_sort_list(std::vector<long> lst) {
    std::vector<long> res;
    std::sort(lst.begin(), lst.end());
    res.reserve(lst.size());
    for (long i = 0; i < lst.size(); i++) {
        res.push_back(lst[i]);
    }
    return res;
}

std::vector<long> strange_sort_list(std::vector<long> lst) {
    std::vector<long> res;
    std::sort(lst.begin(), lst.end());
    res.reserve(lst.size());
    for (long i = 0; i < lst.size(); i++) {
        res.push_back(lst[i]);
    }
    return res;
}

std::vector<long> strange_sort_list(std::vector<long> lst) {
    std::vector<long> res;
    std::sort(lst.begin(), lst.end());
    res.reserve(lst.size());
    for (long i = 0; i < lst.size(); i++) {
        res.push_back(lst[i]);
    }
    return res;
}

std::vector<long> strange_sort_list(std::vector<long> lst) {
    std::vector<long> res;
    std::sort(lst.begin(), lst.end());
    res.reserve(lst.size());
    for (long i = 0; i < lst.size(); i++) {
        res.push_back(lst[i]);
    }
    return res;
}

std::vector<long> strange_sort_list(std::vector<long> lst) {
    std::vector<long> res;
    std::sort(lst.begin(), lst.end());
    res.reserve(lst.size());
    for (long i = 0; i < lst.size(); i++) {
        res.push_back(lst[i]);
    }
    return res;
}

std::vector<long> strange_sort_list(std::vector<long> lst) {
    std::vector<long> res;
    std::sort(lst.begin(), lst.end());
    res.reserve(lst.size());
    for (long i = 0; i < lst.size(); i++) {
        res.push_back(lst[i]);
    }
    return res;
}

std::vector<long> strange_sort_list(std::vector<long> lst) {
    std::vector<long> res;
    std::sort(lst.begin(), lst.end());
    res.reserve(lst.size());
    for (long i = 0; i < lst.size(); i++) {
        res.push_back(lst[i]);
    }
    return res;
}

std::vector<long> strange_sort_list(std::vector<long> lst) {
    std::vector<