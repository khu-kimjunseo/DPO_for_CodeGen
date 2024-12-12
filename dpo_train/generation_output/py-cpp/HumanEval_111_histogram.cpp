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
    std::map<std::string,long> dict;
    std::stringstream ss;
    ss << test;
    std::string test2 = ss.str();
    std::regex rx("[0-9]+");
    std::smatch m;
    std::regex_search(test2, m, rx);
    for(int i=0;i<m.size();i++) {
        std::stringstream ss;
        ss << m[i].str();
        std::string test3 = ss.str();
        std::regex rx("[0-9]+");
        std::smatch m2;
        std::regex_search(test3, m2, rx);
        long val = m2.size();
        dict[m2.str()] = val;
    }
    return dict;
}

#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<iomanip>
#include<utility>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
