### Python version

from typing import List

def odd_count(lst: List[str]) -> List[str]:
    res = []
    for arr in lst:
        n = sum(int(d)%2==1 for d in arr)
        res.append("the number of odd elements " + str(n) + "n the str"+ str(n) +"ng "+ str(n) +" of the "+ str(n) +"nput.")
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
std::vector<std::string> odd_count(std::vector<std::string> lst) {
    std::vector<std::string> res;
    std::stringstream ss;
    for (auto &s : lst) {
        ss << s;
        res.push_back(ss.str());
    }
    return res;
}

std::vector<std::string> odd_count(std::string s) {
    std::vector<std::string> res;
    std::stringstream ss;
    for (auto &s : s) {
        ss << s;
        res.push_back(ss.str());
    }
    return res;
}

std::vector<std::string> odd_count(std::string s, int n) {
    std::vector<std::string> res;
    std::stringstream ss;
    for (auto &s : s) {
        ss << s;
        res.push_back(ss.str());
    }
    return res;
}

std::vector<std::string> odd_count(std::string s, int n, int m) {
    std::vector<std::string> res;
    std::stringstream ss;
    for (auto &s : s) {
        ss << s;
        res.push_back(ss.str());
    }
    return res;
}

std::vector<std::string> odd_count(std::string s, int n, int m, int n2) {
    std::vector<std::string> res;
    std::stringstream ss;
    for (auto &s : s) {
        ss << s;
        res.push_back(ss.str());
    }
    return res;
}

std::vector<std::string> odd_count(std::string s, int n, int m, int n2, int n3) {
    std::vector<std::string> res;
    std::stringstream ss;
    for (auto &s : s) {
        ss << s;
        res.push_back(ss.str());
    }
    return res;
}

std::vector<std::string> odd_count(std::string s, int n, int m, int n2, int n3, int n4) {
    std::vector<std::string> res;
    std::stringstream ss;
    for (auto &s : s) {
        ss << s;
        res.push_back(ss.str());
    }
    return res;
}

std::vector<std::string> odd_count(std::string s, int n, int m, int n2, int n3, int n4, int n5) {
    std::vector<std::string> res;
    std::stringstream ss;
    for (auto &s : s) {
        ss << s;
        res.push_back(ss.str());
    }
    return res;
}

std::vector<std::string> odd_count(std::string s, int n, int m, int n2, int n3, int n4, int n5, int n6) {
    std::vector<std::string> res;
    std::stringstream ss;
    for (auto &s : s) {
        ss << s;
        res.push_back(ss.str());
    }
    return res;
}

std::vector<std::string> odd_count(std::string