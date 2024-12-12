### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> common(ArrayList<Long> l1, ArrayList<Long> l2) {
        Set<Long> set = new HashSet<>(l1);
        set.retainAll(l2);
        ArrayList<Long> ret = new ArrayList<>(set);
        Collections.sort(ret);
        return ret;
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
std::vector<long> common(std::vector<long> l1, std::vector<long> l2) {
    std::vector<long> ret;
    std::unordered_map<long, long> map;
    std::unordered_set<long> set;
    std::unordered_map<long, long>::iterator it;
    std::unordered_set<long>::iterator it2;
    for(long i=0; i<l1.size(); i++) {
        map[l1[i]] = i;
    }
    for(long i=0; i<l2.size(); i++) {
        map[l2[i]] = i;
    }
    for(it=map.begin(); it!=map.end(); it++) {
        ret.push_back(it->first);
    }
    for(it2=set.begin(); it2!=set.end(); it2++) {
        ret.push_back(it2->first);
    }
    return ret;
}

#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cctype>
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
#include<utility>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bits