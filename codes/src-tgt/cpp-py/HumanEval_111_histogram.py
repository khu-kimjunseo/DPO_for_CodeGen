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
std::map<std::string,long> histogram(std::string test) {
    std::map<std::string,long> dict1;
    std::stringstream ss(test);
    std::string word;
    long t = 0;
    while (ss >> word) {
        dict1[word]++;
        if (dict1[word] > t) {
            t = dict1[word];
        }
    }
    std::map<std::string,long> result;
    for (auto i : dict1) {
        if (i.second == t) {
            result[i.first] = t;
        }
    }
    return result;
}


### Python version

from typing import Dict

def histogram(test: str) -> Dict[str, int]:
    dict1={}
    list1=test.split(" ")
    t=0

    for i in list1:
        if(list1.count(i)>t) and i!='':
            t=list1.count(i)
    if t>0:
        for i in list1:
            if(list1.count(i)==t):
                
                dict1[i]=t
    return dict1
