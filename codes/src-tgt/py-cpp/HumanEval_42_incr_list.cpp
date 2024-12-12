### Python version

from typing import List

def incr_list(l: List[int]) -> List[int]:
    return [(e + 1) for e in l]

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> incr_list(std::vector<long> l) {
  std::vector<long> res;
  for (auto e : l) {
    res.push_back(e + 1);
  }
  return res;
}

