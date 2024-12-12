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
        long ans = 0;
        long fizz = 0;
        long buzz = 0;
        for (long i = 0; i < n; i++) {
            if (i % 3 == 0) {
                fizz++;
            } else if (i % 5 == 0) {
                buzz++;
            } else {
                ans++;
            }
        }
        return ans;
    }
}

class Solution {
    public static void main(String[] args) {
        long n = Long.parseLong(args[0]);
        long fizz = Long.parseLong(args[1]);
        long buzz = Long.parseLong(args[2]);
        long ans = Problem.fizzBuzz(n);
        System.out.println(ans);
    }
}
