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
std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::sort(lst.begin(), lst.end());
    std::vector<std::string> new_lst;
    for (auto i:lst) {
        if (i.size()%2 == 0) {
            new_lst.push_back(i);
        }
    }
    std::sort(new_lst.begin(), new_lst.end(), [](std::string a, std::string b){return a.size() < b.size();});
    return new_lst;
}

