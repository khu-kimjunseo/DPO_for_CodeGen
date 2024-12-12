### Python version

from typing import List

def pluck(arr: List[int]) -> List[int]:
    if(len(arr) == 0): return []
    evens = list(filter(lambda x: x%2 == 0, arr))
    if(evens == []): return []
    return [min(evens), arr.index(min(evens))]

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
std::vector<long> pluck(std::vector<long> arr) {
    std::vector<long> res;
    std::vector<long>::iterator it = arr.begin();
    while(it != arr.end()) {
        res.push_back(*it);
        ++it;
    }
    return res;
}

std::string pluck(std::string s) {
    std::stringstream ss;
    std::vector<std::string> v;
    std::vector<std::string>::iterator it = s.begin();
    while(it != s.end()) {
        v.push_back(*it);
        ++it;
    }
    std::string res = "";
    for(int i = 0; i < v.size(); ++i) {
        res += v[i];
    }
    return res;
}

std::string pluck(std::string s, int i) {
    std::stringstream ss;
    std::vector<std::string> v;
    std::vector<std::string>::iterator it = s.begin();
    while(it != s.end()) {
        v.push_back(*it);
        ++it;
    }
    std::string res = "";
    for(int i = 0; i < v.size(); ++i) {
        res += v[i];
    }
    if(i == 0) {
        return res;
    }
    return res;
}

std::string pluck(std::string s, int i, int j) {
    std::stringstream ss;
    std::vector<std::string> v;
    std::vector<std::string>::iterator it = s.begin();
    while(it != s.end()) {
        v.push_back(*it);
        ++it;
    }
    std::string res = "";
    for(int i = 0; i < v.size(); ++i) {
        res += v[i];
    }
    if(i == 0) {
        return res;
    }
    return res;
}

std::string pluck(std::string s, int i, int j, int k) {
    std::stringstream ss;
    std::vector<std::string> v;
    std::vector<std::string>::iterator it = s.begin();
    while(it != s.end()) {
        v.push_back(*it);
        ++it;
    }
    std::string res = "";
    for(int i = 0; i < v.size(); ++i) {
        res += v[i];
    }
    if(i == 0) {
        return res;
    }
    return res;
}

std::string pluck(std::string s, int i, int j, int k, int l) {
    std::stringstream ss;
    std::vector<std::string> v;
    std::vector<std::string>::iterator it = s.begin();
    while(it != s.end()) {
        v.push_back(*it);
        ++it;
    }
    std::string res = "";
    for(int i = 0; i < v.size(); ++i) {
        res += v[i];
    }
    if(i == 0) {
        return res;
    }
    return res;
}

std::string pluck(std::string s, int i, int j, int k, int l, int m) {
    std::stringstream ss;
    std::vector<std