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
long double_the_difference(std::vector<float> lst) {
    long sum = 0;
    for (auto i : lst) {
        if (i > 0 && int(i)%2!=0 && i == int(i)) {
            sum += pow(i, 2);
        }
    }
    return sum;
}


### Python version

from typing import List

def double_the_difference(lst: List[float]) -> int:
    return sum([i**2 for i in lst if i > 0 and i%2!=0 and "." not in str(i)])
