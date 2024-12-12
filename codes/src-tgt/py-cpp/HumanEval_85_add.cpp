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
long add(std::vector<long> lst) {
  long sum = 0;
  for (int i = 1; i < lst.size(); i += 2) {
    if (lst[i] % 2 == 0) {
      sum += lst[i];
    }
  }
  return sum;
}

