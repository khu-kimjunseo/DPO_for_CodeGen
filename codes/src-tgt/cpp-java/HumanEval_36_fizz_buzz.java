### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long fizz_buzz(long n) {
    std::vector<long> ns;
    for (long i = 0; i < n; i++) {
        if (i % 11 == 0 || i % 13 == 0) {
            ns.push_back(i);
        }
    }
    std::stringstream ss;
    for (auto i : ns) {
        ss << i;
    }
    std::string s = ss.str();
    long ans = 0;
    for (auto c : s) {
        ans += (c == '7');
    }
    return ans;
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
    public static long fizzBuzz(long n) {
        List<Long> ns = new ArrayList<>();
        for (long i = 0; i < n; i++) {
            if (i % 11 == 0 || i % 13 == 0) {
                ns.add(i);
            }
        }
        long s = ns.stream().map(i -> String.valueOf(i)).flatMapToInt(String::chars).filter(c -> c == '7').count();
        return s;
    }
    
    

}

