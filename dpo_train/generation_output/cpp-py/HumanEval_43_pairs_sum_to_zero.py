### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool pairs_sum_to_zero(std::vector<long> l) {
    for (int i = 0; i < l.size(); i++) {
        for (int j = i + 1; j < l.size(); j++) {
            if (l[i] + l[j] == 0) {
                return true;
            }
        }
    }
    return false;
}

### Python version

from typing import List

def pairs_sum_to_zero(l: List[int]) -> bool:
    for i in range(len(l)):
        for j in range(i + 1, len(l)):
            if l[i] + l[j] == 0:
                return true
    return false

### C++ version

#import cpp_common
#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_sum_to_zero

#import cpp_common.pairs_