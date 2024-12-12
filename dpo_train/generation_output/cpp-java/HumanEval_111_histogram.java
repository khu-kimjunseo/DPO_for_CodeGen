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
std::map<std::string,long> histogram(std::string test) {
    std::map<std::string,long> dict1;
    std::stringstream ss(test);
    std::string word;
    long t = 0;
    while (ss >> word) {
        dict1[word]++;
        if (dict1[word] > t) {
            t = dict1[word];
        }
    }
    std::map<std::string,long> result;
    for (auto i : dict1) {
        if (i.second == t) {
            result[i.first] = t;
        }
    }
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
    public static HashMap<String,Long> histogram(String test) {
        HashMap<String,Long> result = new HashMap<>();
        long t = 0;
        for (int i = 0; i < test.length(); i++) {
            char c = test.charAt(i);
            if (c == ' ') {
                continue;
            }
            if (c == '-') {
                t = 0;
            } else {
                t++;
            }
            result.put(test.substring(i, i + 1), t);
        }
        return result;
    }
}

class Solution {
    public static void main(String[] args) {
        long t = 0;
        long t1 = 0;
        long t2 = 0;
        long t3 = 0;
        long t4 = 0;
        long t5 = 0;
        long t6 = 0;
        long t7 = 0;
        long t8 = 0;
        long t9 = 0;
        long t10 = 0;
        long t11 = 0;
        long t12 = 0;
        long t13 = 0;
        long t14 = 0;
        long t15 = 0;
        long t16 = 0;
        long t17 = 0;
        long t18 = 0;
        long t19 = 0;
        long t20 = 0;
        long t21 = 0;
        long t22 = 0;
        long t23 = 0;
        long t24 = 0;
        long t25 = 0;
        long t26 = 0;
        long t27 = 0;
        long t28 = 0;
        long t29 = 0;
        long t30 = 0;
        long t31 = 0;
        long t32 = 0;
        long t33 = 0;
        long t34 = 0;
        long t35 = 0;
        long t36 = 0;
        long t37 = 0;
        long t38 = 0;
        long t39 = 0;
        long t40 = 0;
        long t41 = 0;
        long t42 = 0;
        long t43 = 0;
        long t44 = 0;
        long t45 = 0;
        long t46 = 0;
        long t47 = 0;
        long t48 = 0;
        long t49 = 0;
        long t50 = 0;
        long t51 = 0;
        long t52 = 0;
        long t53 = 0;
        long t54 = 0;
        long t55 = 0;
        long t56 = 0;
        long t57 = 0;
        long t58 = 0;
        long t59 = 0;
        long t60 = 0;
        long t61 = 0;
        long t62 = 0;
        long t63 = 0;
        long t64 = 0;
        long t65 = 0;
        long t66 = 0;
        long t67 = 0;
        long t68 = 0;
        