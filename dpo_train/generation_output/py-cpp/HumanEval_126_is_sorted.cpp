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
bool is_sorted(std::vector<long> lst) {
    std::vector<long>::iterator it = lst.begin();
    std::vector<long>::iterator it_end = lst.end();
    while (it != it_end) {
        if (*it < *it_end) {
            return false;
        }
        ++it;
        ++it_end;
    }
    return true;
}

std::vector<long> sort(std::vector<long> lst) {
    std::vector<long> sorted_lst;
    std::vector<long>::iterator it = lst.begin();
    std::vector<long>::iterator it_end = lst.end();
    while (it != it_end) {
        if (is_sorted(lst)) {
            sorted_lst.push_back(*it);
        }
        ++it;
        ++it_end;
    }
    return sorted_lst;
}

std::vector<long> reverse(std::vector<long> lst) {
    std::vector<long> reversed_lst;
    std::vector<long>::iterator it = lst.begin();
    std::vector<long>::iterator it_end = lst.end();
    while (it != it_end) {
        reversed_lst.push_back(*it);
        ++it;
        ++it_end;
    }
    return reversed_lst;
}

std::vector<long> reverse(std::vector<long> lst, long start) {
    std::vector<long> reversed_lst;
    std::vector<long>::iterator it = lst.begin();
    std::vector<long>::iterator it_end = lst.end();
    while (it != it_end) {
        if (*it > start) {
            reversed_lst.push_back(*it);
        }
        ++it;
        ++it_end;
    }
    return reversed_lst;
}

std::vector<long> reverse(std::vector<long> lst, long start, long end) {
    std::vector<long> reversed_lst;
    std::vector<long>::iterator it = lst.begin();
    std::vector<long>::iterator it_end = lst.end();
    while (it != it_end) {
        if (*it > start) {
            reversed_lst.push_back(*it);
        }
        if (*it < end) {
            reversed_lst.push_back(*it);
        }
        ++it;
        ++it_end;
    }
    return reversed_lst;
}

std::vector<long> reverse(std::vector<long> lst, long start, long end, long step) {
    std::vector<long> reversed_lst;
    std::vector<long>::iterator it = lst.begin();
    std::vector<long>::iterator it_end = lst.end();
    while (it != it_end) {
        if (*it > start) {
            reversed_lst.push_back(*it);
        }
        if (*it < end) {
            reversed_lst.push_back(*it);
        }
        if (*it < start + step) {
            