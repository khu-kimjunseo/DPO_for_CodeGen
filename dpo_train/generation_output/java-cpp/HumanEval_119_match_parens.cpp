### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String matchParens(ArrayList<String> lst) {
        return check(lst.get(0) + lst.get(1)) || check(lst.get(1) + lst.get(0)) ? "Yes" : "No";
    }
    public static boolean check(String s) {
        int val = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '(') {
                val++;
            } else {
                val--;
            }
            if (val < 0) {
                return false;
            }
        }
        return val == 0 ? true : false;
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
std::string match_parens(std::vector<std::string> lst) {
    std::stringstream ss;
    std::string s;
    for (int i = 0; i < lst.size(); i++) {
        s = lst.at(i);
        ss << s;
        if (i < lst.size() - 1) {
            ss << "(";
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
#include<utility>
#include<functional>
#include<utility>
#include<cmath>
#include<cctype>
#include<cassert>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<iomanip>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_map>
#include<unordered_set>
#include<bitset>
#include<bits>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<bitset>
#include<bits>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<bitset>
#include<bits>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<bitset>
#include<bits>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<bitset>
#include<bits>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<bitset>
#include<bits>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<bitset>
#include<bits>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<bitset>
#include<bits>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<bitset>
#include<bits>
#include<set>
#include<map>