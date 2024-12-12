### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    // In this Kata, you have to sort an array array list of non-negative integers according to
    // number of ones in their binary representation in ascending order.
    // For similar number of ones, sort based on decimal value.
    // It must be implemented like this:
    // >>> sort_array([1, 5, 2, 3, 4])
    // [1, 2, 3, 4, 5]
    // >>> sort_array([-2, -3, -4, -5, -6])
    // [-6, -5, -4, -3, -2]
    // >>> sort_array([1, 0, 2, 3, 4])
    // [0, 1, 2, 3, 4]
    public static ArrayList<Long> sortArray(ArrayList<Long> arr) {
        return arr.stream().sorted((a, b) -> {
            int aCount = Long.bitCount(Math.abs(a));
            int bCount = Long.bitCount(Math.abs(b));
            if (aCount == bCount) {
                return Long.compare(a, b);
            }
            return Integer.compare(aCount, bCount);
        }).collect(Collectors.toCollection(ArrayList::new));
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
std::vector<long> sort_array(std::vector<long> arr) {
    std::vector<long> res;
    std::sort(arr.begin(), arr.end());
    res.reserve(arr.size());
    for (long i = 0; i < arr.size(); ++i) {
        res.push_back(arr[i]);
    }
    return res;
}

std::vector<int> sort_array(std::vector<int> arr) {
    std::vector<int> res;
    std::sort(arr.begin(), arr.end());
    res.reserve(arr.size());
    for (int i = 0; i < arr.size(); ++i) {
        res.push_back(arr[i]);
    }
    return res;
}

std::vector<int> sort_array(std::vector<int> arr) {
    std::vector<int> res;
    std::sort(arr.begin(), arr.end());
    res.reserve(arr.size());
    for (int i = 0; i < arr.size(); ++i) {
        res.push_back(arr[i]);
    }
    return res;
}

std::vector<int> sort_array(std::vector<int> arr) {
    std::vector<int> res;
    std::sort(arr.begin(), arr.end());
    res.reserve(arr.size());
    for (int i = 0; i < arr.size(); ++i) {
        res.push_back(arr[i]);
    }
    return res;
}

std::vector<int> sort_array(std::vector<int> arr) {
    std::vector<int> res;
    std::sort(arr.begin(), arr.end());
    res.reserve(arr.size());
    for (int i = 0; i < arr.size(); ++i) {
        res.push_back(arr[i]);
    }
    return res;
}

std::vector<int> sort_array(std::vector<int> arr) {
    std::vector<int> res;
    std::sort(arr.begin(), arr.end());
    res.reserve(arr.size());
    for (int i = 0; i < arr.size(); ++i) {
        res.push_back(arr[i]);
    }
    return res;
}

std