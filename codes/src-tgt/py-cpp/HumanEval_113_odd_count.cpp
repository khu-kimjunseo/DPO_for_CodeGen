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
std::vector<std::string> odd_count(std::vector<std::string> lst) {
    std::vector<std::string> res;
    for (auto arr : lst) {
        int n = std::count_if(arr.begin(), arr.end(), [](char c){return c%2==1;});
        res.push_back("the number of odd elements " + std::to_string(n) + "n the str"+ std::to_string(n) +"ng "+ std::to_string(n) +" of the "+ std::to_string(n) +"nput.");
    }
    return res;
}

