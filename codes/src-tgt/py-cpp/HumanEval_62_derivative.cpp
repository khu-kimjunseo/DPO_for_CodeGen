### Python version

from typing import List

def derivative(xs: List[int]) -> List[int]:
    return [(i * x) for i, x in enumerate(xs)][1:]

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> derivative(std::vector<long> xs) {
  std::vector<long> res;
  for (int i = 1; i < xs.size(); ++i) {
    res.push_back(i * xs[i]);
  }
  return res;
}

