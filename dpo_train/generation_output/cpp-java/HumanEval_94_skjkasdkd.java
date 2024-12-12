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
long skjkasdkd(std::vector<long> lst) {
    auto isPrime = [](long n) -> bool {
        for(long i=2;i<=sqrt(n);i++) {
            if(n%i==0) return false;
        }
        return true;
    };
    long maxx = 0;
    for(auto i:lst) {
        if(i>maxx && isPrime(i)) maxx = i;
    }
    long result = 0;
    std::string s = std::to_string(maxx);
    for(auto c:s) result += c-'0';
    return result;
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
    public static long skjkasdkd(ArrayList<Long> lst) {
        long result = 0;
        for(long i:lst) {
            result += i;
        }
        return result;
    }
}

class Solution {
    public static void main(String[] args) {
        long n = Long.parseLong(args[0]);
        long m = Long.parseLong(args[1]);
        long result = Problem.skjkasdkd(Arrays.asList(n,m));
        System.out.println(result);
    }
}
