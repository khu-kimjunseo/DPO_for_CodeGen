### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> tri(long n) {
        if (n == 0) {
            return new ArrayList<Long>(Arrays.asList(1L));
        }
        ArrayList<Long> my_tri = new ArrayList<Long>(Arrays.asList(1L, 3L));
        for (int i = 2; i <= n; i++) {
            long term = i % 2 == 0 ? i / 2 + 1 : my_tri.get(i - 1) + my_tri.get(i - 2) + (i + 3) / 2;
            my_tri.add(term);
        }
        return my_tri;
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
std::vector<long> tri(long n) {
    std::vector<long> res;
    if (n == 0) {
        res.push_back(1L);
        return res;
    }
    res.push_back(1L);
    res.push_back(3L);
    res.push_back(n);
    return res;
}

std::map<long, long> m;
std::map<long, long>::iterator it;
std::map<long, long>::const_iterator cit;
std::map<long, long>::reverse_iterator rit;
std::map<long, long>::const_reverse_iterator crit;

std::unordered_map<long, long> u;
std::unordered_map<long, long>::iterator uit;
std::unordered_map<long, long>::const_iterator ucit;
std::unordered_map<long, long>::reverse_iterator ritu;
std::unordered_map<long, long>::const_reverse_iterator critu;

std::vector<long> v;
std::vector<long>::iterator vit;
std::vector<long>::const_iterator vcit;
std::vector<long>::reverse_iterator ritv;
std::vector<long>::const_reverse_iterator critv;

std::map<long, long> mv;
std::map<long, long>::iterator mit;
std::map<long, long>::const_iterator mcit;
std::map<long, long>::reverse_iterator ritm;
std::map<long, long>::const_reverse_iterator critm;

std::unordered_map<long, long> uv;
std::unordered_map<long, long>::iterator uitv;
std::unordered_map<long, long>::const_iterator ucitv;
std::unordered_map<long, long>::reverse_iterator rituv;
std::unordered_map<long, long>::const_reverse_iterator crituv;

std::vector<long> vv;
std::vector<long>::iterator vitv;
std::vector<long>::const_iterator vcitv;
std::vector<long>::reverse_iterator ritvv;
std::vector<long>::const_reverse_iterator critvv;

std::map<long, long> mvv;
std::map<long, long>::iterator mitv;
std::map<long, long>::const_iterator mcitv;
std::map<long, long>::reverse_iterator ritmv;
std::map<long, long>::const_reverse_iterator critmv;

std::unordered_map<long, long> uvv;
std::unordered_map<long, long>::iterator uitv;
std::unordered_map<long, long>::const_iterator ucitv;
std::unordered_map<long