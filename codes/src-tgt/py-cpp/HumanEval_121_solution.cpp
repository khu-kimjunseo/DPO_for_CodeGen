### Python version

from typing import List

def solution(lst: List[int]) -> int:
    return sum([x for idx, x in enumerate(lst) if idx%2==0 and x%2==1])

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long solution(std::vector<long> lst) {
  long sum = 0;
  for (int i = 0; i < lst.size(); i++) {
    if (i % 2 == 0 && lst[i] % 2 == 1) {
      sum += lst[i];
    }
  }
  return sum;
}

