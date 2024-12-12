### Python version

from typing import List

def skjkasdkd(lst: List[int]) -> int:
    def isPrime(n):
        for i in range(2,int(n**0.5)+1):
            if n%i==0:
                return False

        return True
    maxx = 0
    i = 0
    while i < len(lst):
        if(lst[i] > maxx and isPrime(lst[i])):
            maxx = lst[i]
        i+=1
    result = sum(int(digit) for digit in str(maxx))
    return result

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
long skjkasdkd(std::vector<long> lst) {
    long result = 0;
    for(long i = 0; i < lst.size(); i++) {
        result += lst[i];
    }
    return result;
}

std::vector<long> skjkasdkd(std::string s) {
    std::vector<long> lst;
    std::stringstream ss(s);
    std::string item;
    while(std::getline(ss,item,',') != std::string::npos) {
        lst.push_back(skjkasdkd(item));
    }
    return lst;
}

std::vector<long> skjkasdkd(std::string s, std::string t) {
    std::vector<long> lst;
    std::stringstream ss(s);
    std::string item;
    while(std::getline(ss,item,',') != std::string::npos) {
        lst.push_back(skjkasdkd(item, t));
    }
    return lst;
}

std::vector<long> skjkasdkd(std::string s, std::string t, std::string k) {
    std::vector<long> lst;
    std::stringstream ss(s);
    std::string item;
    while(std::getline(ss,item,',') != std::string::npos) {
        lst.push_back(skjkasdkd(item, t, k));
    }
    return lst;
}

std::vector<long> skjkasdkd(std::string s, std::string t, std::string k, std::string v) {
    std::vector<long> lst;
    std::stringstream ss(s);
    std::string item;
    while(std::getline(ss,item,',') != std::string::npos) {
        lst.push_back(skjkasdkd(item, t, k, v));
    }
    return lst;
}

std::vector<long> skjkasdkd(std::string s, std::string t, std::string k, std::string v, std::string w) {
    std::vector<long> lst;
    std::stringstream ss(s);
    std::string item;
    while(std::getline(ss,item,',') != std::string::npos) {
        lst.push_back(skjkasdkd(item, t, k, v, w));
    }
    return lst;
}

std::vector<long> skjkasdkd(std::string s, std::string t, std::string k, std::string v, std::string w, std::string x) {
    std::vector<long> lst;
    std::stringstream ss(s);
    std::string item;
    while(std::getline(ss,item,',') != std::string::npos) {
        lst.push_back(skjkasdkd(item, t, k, v, w, x));
    }
    return lst;
}

std::vector<long> skjkasdkd(std::string s, std::string t, std::string