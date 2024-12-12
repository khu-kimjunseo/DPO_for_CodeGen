### Python version

from typing import List

def sort_even(l: List[int]) -> List[int]:
    evens = l[::2]
    odds = l[1::2]
    evens.sort()
    ans = []
    for e, o in zip(evens, odds):
        ans.extend([e, o])
    if len(evens) > len(odds):
        ans.append(evens[-1])
    return ans

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
std::vector<long> sort_even(std::vector<long> l) {
    std::vector<long> ans;
    std::vector<long>::iterator it = l.begin();
    std::vector<long>::iterator it_end = l.end();
    while (it != it_end) {
        if (*it % 2 == 0) {
            ans.push_back(*it);
            it++;
        } else {
            it++;
        }
    }
    return ans;
}

std::vector<long> sort_even(std::vector<long> l) {
    std::vector<long> ans;
    std::vector<long>::iterator it = l.begin();
    std::vector<long>::iterator it_end = l.end();
    while (it != it_end) {
        if (*it % 2 == 0) {
            ans.push_back(*it);
            it++;
        } else {
            it++;
        }
    }
    return ans;
}

std::vector<long> sort_even(std::vector<long> l) {
    std::vector<long> ans;
    std::vector<long>::iterator it = l.begin();
    std::vector<long>::iterator it_end = l.end();
    while (it != it_end) {
        if (*it % 2 == 0) {
            ans.push_back(*it);
            it++;
        } else {
            it++;
        }
    }
    return ans;
}

std::vector<long> sort_even(std::vector<long> l) {
    std::vector<long> ans;
    std::vector<long>::iterator it = l.begin();
    std::vector<long>::iterator it_end = l.end();
    while (it != it_end) {
        if (*it % 2 == 0) {
            ans.push_back(*it);
            it++;
        } else {
            it++;
        }
    }
    return ans;
}

std::vector<long> sort_even(std::vector<long> l) {
    std::vector<long> ans;
    std::vector<long>::iterator it = l.begin();
    std::vector<long>::iterator it_end = l.end();
    while (it != it_end) {
        if (*it % 2 == 0) {
            ans.push_back(*it);
            it++;
        } else {
            it++;
        }
    }
    return ans;
}

std::vector<long> sort_even(std::vector<long> l) {
    std::vector<long> ans;
    std::vector<long>::iterator it = l.begin();
    std::vector<long>::iterator it_end = l.end();
    while (it != it_end) {
        if (*it % 2 == 0) {
            ans.push_back(*it);
            it++;
        } else {
            it++;
        }
    }
    return ans;
}

std::vector<long> sort_even(std::vector<long> l) {
    std::vector<long> ans;
    std::vector<long>::iterator it = l.begin();
    std::vector<long>::iterator it_end = l.end();
    while (it != it_end) {
        if (*it % 2 == 0) {
            ans.push_back(*