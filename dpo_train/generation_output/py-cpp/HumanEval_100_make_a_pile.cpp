### Python version

from typing import List

def make_a_pile(n: int) -> List[int]:
    return [n + 2*i for i in range(n)]

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
std::vector<long> make_a_pile(long n) {
    std::vector<long> res;
    res.push_back(n);
    while (res.size() > 0) {
        long m = res.back();
        res.pop_back();
        res.push_back(m);
    }
    return res;
}

std::map<long, long> make_a_pile_map(long n) {
    std::map<long, long> res;
    res.insert(std::make_pair(n, n));
    while (res.size() > 0) {
        long m = res.back();
        res.erase(res.find(m));
        res.insert(std::make_pair(m, m));
    }
    return res;
}

std::set<long> make_a_pile_set(long n) {
    std::set<long> res;
    res.insert(n);
    while (res.size() > 0) {
        long m = res.back();
        res.erase(res.find(m));
        res.insert(m);
    }
    return res;
}

std::unordered_map<long, long> make_a_pile_unordered_map(long n) {
    std::unordered_map<long, long> res;
    res.insert(std::make_pair(n, n));
    while (res.size() > 0) {
        long m = res.back();
        res.erase(res.find(m));
        res.insert(std::make_pair(m, m));
    }
    return res;
}

std::unordered_set<long> make_a_pile_unordered_set(long n) {
    std::unordered_set<long> res;
    res.insert(n);
    while (res.size() > 0) {
        long m = res.back();
        res.erase(res.find(m));
        res.insert(m);
    }
    return res;
}

std::map<long, long> make_a_pile_map_unordered_map(long n) {
    std::map<long, long> res;
    res.insert(std::make_pair(n, n));
    while (res.size() > 0) {
        long m = res.back();
        res.erase(res.find(m));
        res.insert(std::make_pair(m, m));
    }
    return res;
}

std::set<long> make_a_pile_set_unordered_set(long n) {
    std::set<long> res;
    res.insert(n);
    while (res.size() > 0) {
        long m = res.back();
        res.erase(res.find(m));
        res.insert(m);
    }
    return res;
}

std::unordered_map<long, long> make_a_pile_unordered_map_unordered_set(long n) {
    std::unordered_map<long, long> res;
    res.insert(std::make_pair(n, n));
    while (res.size() > 0) {
        long m = res.back();
        res.erase(res.find(m));
        res.insert(std::make_pair(m, m));
    }
    return res;
}

std::map<long, long> make_a_pile_map_unordered_map_unordered_set(long n) {
    std::map<long, long> res;
    res.insert(std::make_pair(