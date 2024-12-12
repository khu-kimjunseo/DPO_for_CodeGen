### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> removeDuplicates(ArrayList<Long> numbers) {
        Map<Long, Long> counts = new HashMap<>();
        for (Long n : numbers) {
            counts.put(n, counts.getOrDefault(n, 0L) + 1L);
        }
        return numbers.stream().filter(n -> counts.get(n) <= 1L).collect(Collectors.toCollection(ArrayList::new));
    }
    
}

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
    std::unordered_map<long, long> counts;
    for (long n : numbers) {
        counts.insert(n, counts.getOrDefault(n, 0L) + 1L);
    }
    for (long n : numbers) {
        if (counts.get(n) == 1L) {
            result.push_back(n);
        }
    }
    return result;
}

#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<deque>
#include<list>
#include<tuple>
#include<bitset>
#include<numeric>
#include<utility>
#include<functional>
#include<iterator>
#include<iterator>
#include<iomanip>
#include<fstream>
#include<numeric>
#include<bitset>
#include<algorithm>
#include<utility>
#include<functional>
#include<bitset>
#include<numeric>
#include<bitset>
#include<utility>
#include<functional>
#include<bitset>
#include<utility>
#include<bitset>
#include<numeric>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<