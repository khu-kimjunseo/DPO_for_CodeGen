### Python version

from typing import List

def add(lst: List[int]) -> int:
    return sum([lst[i] for i in range(1, len(lst), 2) if lst[i]%2 == 0])

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
long add(std::vector<long> lst) {
    long sum = 0;
    for (auto i = 0; i < lst.size(); ++i) {
        sum += lst[i];
    }
    return sum;
}

long add(std::vector<long> lst, long val) {
    long sum = 0;
    for (auto i = 0; i < lst.size(); ++i) {
        sum += lst[i] + val;
    }
    return sum;
}

long add(std::vector<long> lst, std::vector<long> val) {
    long sum = 0;
    for (auto i = 0; i < lst.size(); ++i) {
        sum += lst[i] + val[i];
    }
    return sum;
}

long add(std::vector<long> lst, std::vector<long> val, long val2) {
    long sum = 0;
    for (auto i = 0; i < lst.size(); ++i) {
        sum += lst[i] + val[i] + val2;
    }
    return sum;
}

long add(std::vector<long> lst, std::vector<long> val, std::vector<long> val2) {
    long sum = 0;
    for (auto i = 0; i < lst.size(); ++i) {
        sum += lst[i] + val[i] + val2[i];
    }
    return sum;
}

long add(std::vector<long> lst, std::vector<long> val, std::vector<long> val2, long val3) {
    long sum = 0;
    for (auto i = 0; i < lst.size(); ++i) {
        sum += lst[i] + val[i] + val2[i] + val3;
    }
    return sum;
}

long add(std::vector<long> lst, std::vector<long> val, std::vector<long> val2, std::vector<long> val3, long val4) {
    long sum = 0;
    for (auto i = 0; i < lst.size(); ++i) {
        sum += lst[i] + val[i] + val2[i] + val3[i] + val4;
    }
    return sum;
}

long add(std::vector<long> lst, std::vector<long> val, std::vector<long> val2, std::vector<long> val3, std::vector<long> val4, long val5) {
    long sum = 0;
    for (auto i = 0; i < lst.size(); ++i) {
        sum += lst[i] + val[i] + val2[i] + val3[i] + val4[i] + val5;
    }
    return sum;
}

long add(std::vector<long> lst, std::vector<long> val, std::vector<long> val2, std::vector<long> val3, std::vector<long> val4, std::vector<long> val5, long val6) {
    long sum = 0;
    for (auto i = 0; i < lst.size(); ++i) {
        sum += lst[i] + val[i] + val2[i] + val3[i] + val4[i] + val5[i] + val6;
    }
    return sum;
}

long add(std::vector<long> lst, std::vector<long> val, std::vector<long> val2, std::vector<long> val