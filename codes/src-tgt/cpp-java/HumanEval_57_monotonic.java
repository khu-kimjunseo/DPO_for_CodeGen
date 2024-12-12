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
bool monotonic(std::vector<long> l) {
    return std::is_sorted(l.begin(), l.end()) || std::is_sorted(l.rbegin(), l.rend());
}


### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean monotonic(ArrayList<Long> l) {
        if (l.equals(l.stream().sorted().collect(Collectors.toList())) || l.equals(l.stream().sorted(Comparator.reverseOrder()).collect(Collectors.toList()))) {
            return true;
        }
        return false;
    }
    

}

