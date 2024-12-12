### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> sort_even(std::vector<long> l) {
    std::vector<long> evens;
    for(int i=0;i<l.size();i+=2) evens.push_back(l[i]);
    std::vector<long> odds;
    for(int i=1;i<l.size();i+=2) odds.push_back(l[i]);
    std::sort(evens.begin(), evens.end());
    std::vector<long> ans;
    for(int i=0;i<odds.size();i++) {
        ans.push_back(evens[i]);
        ans.push_back(odds[i]);
    }
    if(evens.size() > odds.size()) ans.push_back(evens[evens.size()-1]);
    return ans;
}

### Python version

from typing import List

def sort_even(l: List[int]) -> List[int]:
    return sort_even(l[0:l.size()/2])

def sort_odd(l: List[int]) -> List[int]:
    return sort_even(l[l.size()/2:])

### C++ version

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<cstring>
#include<ctime>
#include<deque>
#include<set>
#include<map>
#include<list>
#include<iterator>
#include<utility>
#include<sstream>
#include<iomanip>
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include