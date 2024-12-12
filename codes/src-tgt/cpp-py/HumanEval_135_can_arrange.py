### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long can_arrange(std::vector<long> arr) {
    long ind=-1;
    long i=1;
    while (i<arr.size()) {
      if (arr[i]<arr[i-1]) {
        ind=i;
      }
      i+=1;
    }
    return ind;
}


### Python version

from typing import List

def can_arrange(arr: List[int]) -> int:
    ind=-1
    i=1
    while i<len(arr):
      if arr[i]<arr[i-1]:
        ind=i
      i+=1
    return ind
