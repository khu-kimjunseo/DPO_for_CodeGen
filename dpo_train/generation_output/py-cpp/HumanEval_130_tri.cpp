### Python version

from typing import List

def tri(n: int) -> List[int]:
    if n == 0:
        return [1]
    my_tri = [1, 3]
    for i in range(2, n + 1):
        if i % 2 == 0:
            my_tri.append(i / 2 + 1)
        else:
            my_tri.append(my_tri[i - 1] + my_tri[i - 2] + (i + 3) / 2)
    return my_tri

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
std::vector<long> tri(long n) {
    std::vector<long> res;
    if (n == 0) {
        res.push_back(1);
        return res;
    }
    std::vector<long> my_tri;
    for (long i = 1; i <= n; i++) {
        my_tri.push_back(i);
        for (long j = i + 1; j <= n; j++) {
            if (i % 2 == 0) {
                my_tri.push_back(j);
            } else {
                my_tri.push_back(my_tri[j - 1] + my_tri[j - 2] + (i + 3) / 2);
            }
        }
    }
    return res;
}

std::string to_string(long n) {
    std::stringstream ss;
    if (n == 0) {
        ss << "0";
    } else {
        ss << n;
    }
    return ss.str();
}

std::string to_string(std::vector<long> n) {
    std::stringstream ss;
    for (long i = 0; i < n.size(); i++) {
        ss << n[i];
    }
    return ss.str();
}

std::string to_string(std::unordered_map<long, long> n) {
    std::stringstream ss;
    for (long i = 0; i < n.size(); i++) {
        ss << n[i];
    }
    return ss.str();
}

std::string to_string(std::unordered_set<long> n) {
    std::stringstream ss;
    for (long i = 0; i < n.size(); i++) {
        ss << n[i];
    }
    return ss.str();
}

std::string to_string(std::unordered_set<std::string> n) {
    std::stringstream ss;
    for (long i = 0; i < n.size(); i++) {
        ss << n[i];
    }
    return ss.str();
}

std::string to_string(std::unordered_map<std::string, long> n) {
    std::stringstream ss;
    for (long i = 0; i < n.size(); i++) {
        ss << n[i];
    }
    return ss.str();
}

std::string to_string(std::unordered_set<std::string> n) {
    std::stringstream ss;
    for (long i = 0; i < n.size(); i++) {
        ss << n[i];
    }
    return ss.str();
}

std::string to_string(std::unordered_map<std::string, std::string> n) {
    std::stringstream ss;
    for (long i = 0; i < n.size(); i++) {
        ss << n[i];
    }
    return ss.str();
}

std::string to_string(std::unordered_set<std::string> n) {
    std::stringstream ss;
    for (long i = 0; i < n.size(); i++) {
        ss << n[i];
    }
    return ss.str();
}

std::string to_string(std::unordered_map<std::string, std