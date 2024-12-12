### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> pluck(std::vector<long> arr) {
    if(arr.size() == 0) return {};
    std::vector<long> evens;
    for(auto x: arr) if(x%2 == 0) evens.push_back(x);
    if(evens.size() == 0) return {};
    long min_val = *std::min_element(evens.begin(), evens.end());
    return {min_val, std::find(arr.begin(), arr.end(), min_val) - arr.begin()};
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
    public static ArrayList<Long> pluck(ArrayList<Long> arr) {
        ArrayList<Long> res = new ArrayList<>();
        for(long x: arr) res.add(x);
        return res;
    }
    public static ArrayList<Long> pluck(ArrayList<Long> arr, long val) {
        ArrayList<Long> res = new ArrayList<>();
        for(long x: arr) if(x == val) res.add(x);
        return res;
    }
    public static ArrayList<Long> pluck(ArrayList<Long> arr, long val, long min) {
        ArrayList<Long> res = new ArrayList<>();
        for(long x: arr) if(x == val) res.add(x);
        if(min == 0) return res;
        for(long x: res) if(x < min) res.remove(x);
        return res;
    }
    public static ArrayList<Long> pluck(ArrayList<Long> arr, long val, long min, long max) {
        ArrayList<Long> res = new ArrayList<>();
        for(long x: arr) if(x == val) res.add(x);
        if(min == 0) return res;
        for(long x: res) if(x < min) res.remove(x);
        if(max == 0) return res;
        for(long x: res) if(x > max) res.remove(x);
        return res;
    }
    public static ArrayList<Long> pluck(ArrayList<Long> arr, long val, long min, long max, long step) {
        ArrayList<Long> res = new ArrayList<>();
        for(long x: arr) if(x == val) res.add(x);
        if(min == 0) return res;
        for(long x: res) if(x < min) res.remove(x);
        if(max == 0) return res;
        for(long x: res) if(x > max) res.remove(x);
        if(step == 0) return res;
        for(long x: res) if(x < min) res.remove(x);
        if(step == 1) return res;
        for(long x: res) if(x > max) res.remove(x);
        return res;
    }
    public static ArrayList<Long> pluck(ArrayList<Long> arr, long val, long min, long max, long step, long step2) {
        ArrayList<Long> res = new ArrayList<>();
        for(long x: arr) if(x == val) res.add(x);
        if(min == 0) return res;
        for(long x: res) if(x < min) res.remove(x);
        if(max == 0) return res;
        for(long x: res) if(x > max) res.remove(x);
        if(step == 0) return res;
        for(long x: res) if(x < min) res.remove(x);
        if(step == 1) return res;
        for(long x: res) if(x >