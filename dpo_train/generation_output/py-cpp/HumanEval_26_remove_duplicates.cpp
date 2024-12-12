### Python version

from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    import collections
    c = collections.Counter(numbers)
    return [n for n in numbers if c[n] <= 1]

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
std::vector<long> remove_duplicates(std::vector<long> numbers) {
    std::vector<long> result;
    std::unordered_set<long> unique_numbers;
    for (long n : numbers) {
        unique_numbers.insert(n);
    }
    for (long n : unique_numbers) {
        result.push_back(n);
    }
    return result;
}

#include<iostream>
#include<fstream>
#include<string>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<vector>
#include<queue>
#include<stack>
#include<deque>
#include<algorithm>
#include<utility>
#include<functional>
#include<numeric>
#include<initializer_list>
#include<bitset>
#include<utility>
#include<functional>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<bitset>
#include<utility>
#include<functional>
#include<initializer_list>
#include<bitset>
#include<utility>
#include<functional>
#include<initializer_list>
#include<bitset>
#include<utility>
#include<functional>
#include<initializer_list>
#include<bitset>
#include<utility>
#include<functional>
#include<initializer_list>
#include<bitset>
#include<utility>
#include<functional>
#include<initializer_list>
#include<bitset>
#include<utility>
#include<functional>
#include<initializer_list>
#include<bitset>
#include<utility>
#include<functional>
#include<initializer_list>
#include<bitset>
#include<utility>
#include<functional>
#include<initializer_list>
#include<bitset>
#include<utility>
#include<functional>
#include<initializer_list>
#include<bitset>
#include<utility>
#include<functional>
#include<initializer_list>
#include<bitset>
#include<utility>
#include<functional>
#include<initializer_list>
#include<bitset>
#include<utility>
#include<functional>
#include<initializer_list>
#include<bitset>
#include<utility>
#include<functional>
#include<initializer_list>
#include<bitset>
#include<utility>
#include<functional>
#include<initializer_list>
#include<bitset>
#include<utility>
#include<functional>
#include<initializer_list>
#include<bitset>
#include<utility>
#include<functional>
#include<initializer_list>
#include<bitset>
#include<utility>
#include<functional>
#include<initializer_list>
#include<bitset>
#include<utility>
#include<functional>
#include<initializer_list>
#include<bitset>
#include<utility>
#include<functional>
#include<initializer_list>
#include<bitset>
#include<utility>
#include<functional>
#include<initializer_list>
#include<bitset>
#include<utility>
#include<functional>
#include<initializer_list>
#include<bitset>
#include<utility