### Python version

from typing import List

def sorted_list_sum(lst: List[str]) -> List[str]:
    lst.sort()
    new_lst = []
    for i in lst:
        if len(i)%2 == 0:
            new_lst.append(i)
    return sorted(new_lst, key=len)

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
std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::vector<std::string> new_lst;
    std::stringstream ss;
    for (auto i = 0; i < lst.size(); i++) {
        ss << lst[i];
        new_lst.push_back(ss.str());
    }
    return new_lst;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst, int k) {
    std::vector<std::string> new_lst;
    std::stringstream ss;
    for (auto i = 0; i < lst.size(); i++) {
        ss << lst[i];
        if (i == k) {
            new_lst.push_back(ss.str());
        } else {
            new_lst.push_back(ss.str());
        }
    }
    return new_lst;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst, int k, int m) {
    std::vector<std::string> new_lst;
    std::stringstream ss;
    for (auto i = 0; i < lst.size(); i++) {
        ss << lst[i];
        if (i == k) {
            new_lst.push_back(ss.str());
        } else {
            new_lst.push_back(ss.str());
        }
    }
    return new_lst;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst, int k, int m, int n) {
    std::vector<std::string> new_lst;
    std::stringstream ss;
    for (auto i = 0; i < lst.size(); i++) {
        ss << lst[i];
        if (i == k) {
            new_lst.push_back(ss.str());
        } else {
            new_lst.push_back(ss.str());
        }
    }
    return new_lst;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst, int k, int m, int n, int p) {
    std::vector<std::string> new_lst;
    std::stringstream ss;
    for (auto i = 0; i < lst.size(); i++) {
        ss << lst[i];
        if (i == k) {
            new_lst.push_back(ss.str());
        } else {
            new_lst.push_back(ss.str());
        }
    }
    return new_lst;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst, int k, int m, int n, int p, int q) {
    std::vector<std::string> new_lst;
    std::stringstream ss;
    for (auto i = 0; i < lst.size(); i++) {
        ss << lst[i];
        if (i == k) {
            new_lst.push_back(ss.str());
        } else {
            new_lst.push_back(ss.str());
        }
    }
    return new_lst;
}

std::vector<std::string> sorted