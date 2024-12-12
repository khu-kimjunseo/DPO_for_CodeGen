### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String exchange(ArrayList<Long> lst1, ArrayList<Long> lst2) {
        long odd = lst1.stream().filter(i -> i % 2 == 1).count();
        long even = lst2.stream().filter(i -> i % 2 == 0).count();
        return even >= odd ? "YES" : "NO";
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
std::string exchange(std::vector<long> lst1, std::vector<long> lst2) {
    std::stringstream ss;
    ss << "YES";
    for(long i = 0; i < lst1.size(); i++) {
        if(lst1[i] % 2 == 1) {
            ss << "1";
        } else {
            ss << "0";
        }
    }
    for(long i = 0; i < lst2.size(); i++) {
        if(lst2[i] % 2 == 1) {
            ss << "1";
        } else {
            ss << "0";
        }
    }
    return ss.str();
}

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#include<iterator>
#include<iterator>
#include<bitset>
#include<bits>
#include<stack>
#include<queue>
#include<deque>
#include<list>
#include<tuple>
#include<bitset>
#include<unordered_map>
#include<unordered_set>
#include<bitset>
#include<bits>
#include<algorithm>
#include<iterator>
#include<iterator>
#include<bitset>
#include<bits>
#include<vector>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<bitset>
#include<bits>
#include<algorithm>
#include<iterator>
#include<iterator>
#include<bitset>
#include<bits>
#include<algorithm>
#include<iterator>
#include<iterator>
#include<bitset>
#include<bits>
#include<algorithm>
#include<iterator>
#include<iterator>
#include<bitset>
#include<bits>
#include<algorithm>
#include<iterator>
#include<iterator>
#include<bitset>
#include<bits>
#include<algorithm>
#include<iterator>
#include<iterator>
#include<bitset>
#include<bits>
#include<algorithm>
#include<iterator>
#include<iterator>
#include<bitset>
#include<bits>
#include<algorithm>
#include<iterator>
#include<iterator>
#include<bitset>
#include<bits>
#include<algorithm>
#include<iterator>
#include<iterator>
#include<bitset>
#include<bits>
#include<algorithm>
#include<iterator>
#include<iterator>
#include<bitset>
#include<bits>
#include<algorithm>
#include<iterator>
#include<iterator>
#include<bitset>
#include<bits>
#include<algorithm>
#include<iterator>
#include<iterator>
#include<bitset>
#include<bits>
#include<algorithm>
#include<iterator>
#include<iterator>