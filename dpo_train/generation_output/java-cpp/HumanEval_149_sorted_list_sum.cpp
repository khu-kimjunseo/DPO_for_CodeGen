### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> sortedListSum(ArrayList<String> lst) {
        lst.sort(null);
        ArrayList<String> new_lst = new ArrayList<String>();
        for (String i : lst) {
            if (i.length() % 2 == 0) {
                new_lst.add(i);
            }
        }
        new_lst.sort((a, b) -> a.length() - b.length());
        return new_lst;
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
std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::vector<std::string> new_lst;
    std::sort(lst.begin(), lst.end());
    for (std::string i : lst) {
        new_lst.push_back(i);
    }
    return new_lst;
}

#include<iostream>
#include<fstream>
#include<sstream>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_map>
#include<unordered_set>
#include<string>
#include<string>
#include<bitset>
#include<queue>
#include<stack>
#include<deque>
#include<algorithm>
#include<utility>
#include<functional>
#include<numeric>
#include<cassert>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<iomanip>
#include<istream>
#include<iostream>
#include<sstream>
#include<fstream>
#include<cstdlib>
#include<cmath>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cmath>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#