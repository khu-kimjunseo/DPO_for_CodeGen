### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> common(std::vector<long> l1, std::vector<long> l2) {
    std::set<long> ret;
    for (auto e1 : l1) {
        for (auto e2 : l2) {
            if (e1 == e2) {
                ret.insert(e1);
            }
        }
    }
    std::vector<long> v(ret.begin(), ret.end());
    std::sort(v.begin(), v.end());
    return v;
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
    public static ArrayList<Long> common(ArrayList<Long> l1, ArrayList<Long> l2) {
        ArrayList<Long> ret = new ArrayList<>();
        for (long e1 : l1) {
            for (long e2 : l2) {
                if (e1 == e2) {
                    ret.add(e1);
                }
            }
        }
        return ret;
    }
}

class Solution {
    public static void main(String[] args) {
        long[] l1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] l2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        ArrayList<Long> l = Problem.common(l1, l2);
        System.out.println(l);
    }
}
