### Python version

from typing import List

def by_length(arr: List[int]) -> List[str]:
    dic = {
        1: "One",
        2: "Two",
        3: "Three",
        4: "Four",
        5: "Five",
        6: "Six",
        7: "Seven",
        8: "Eight",
        9: "Nine",
    }
    sorted_arr = sorted(arr, reverse=True)
    new_arr = []
    for var in sorted_arr:
        try:
            new_arr.append(dic[var])
        except:
            pass
    return new_arr

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
std::vector<std::string> by_length(std::vector<long> arr) {
    std::vector<std::string> res;
    std::stringstream ss;
    for (long i = 0; i < arr.size(); i++) {
        ss << arr[i];
        res.push_back(ss.str());
    }
    return res;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> res;
    std::stringstream ss;
    for (int i = 0; i < arr.size(); i++) {
        ss << arr[i];
        res.push_back(ss.str());
    }
    return res;
}

std::vector<std::string> by_length(std::vector<long> arr) {
    std::vector<std::string> res;
    std::stringstream ss;
    for (long i = 0; i < arr.size(); i++) {
        ss << arr[i];
        res.push_back(ss.str());
    }
    return res;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> res;
    std::stringstream ss;
    for (int i = 0; i < arr.size(); i++) {
        ss << arr[i];
        res.push_back(ss.str());
    }
    return res;
}

std::vector<std::string> by_length(std::vector<long> arr) {
    std::vector<std::string> res;
    std::stringstream ss;
    for (long i = 0; i < arr.size(); i++) {
        ss << arr[i];
        res.push_back(ss.str());
    }
    return res;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> res;
    std::stringstream ss;
    for (int i = 0; i < arr.size(); i++) {
        ss << arr[i];
        res.push_back(ss.str());
    }
    return res;
}

std::vector<std::string> by_length(std::vector<long> arr) {
    std::vector<std::string> res;
    std::stringstream ss;
    for (long i = 0; i < arr.size(); i++) {
        ss << arr[i];
        res.push_back(ss.str());
    }
    return res;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> res;
    std::stringstream ss;
    for (int i = 0; i < arr.size(); i++) {
        ss << arr[i];
        res.push_back(ss.str());
    }
    return res;
}

std::vector<std::string> by_length(std::vector<long> arr) {
    std::vector<std::string> res;
    std::stringstream ss;
    for (long i = 0; i < arr.size(); i++)