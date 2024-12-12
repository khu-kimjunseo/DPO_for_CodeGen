### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> makeAPile(long n) {
        return IntStream.range(0, (int) n).mapToObj(i -> n + 2 * i).collect(Collectors.toCollection(ArrayList::new));
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
std::vector<long> make_a_pile(long n) {
    std::vector<long> a;
    for (long i = 0; i < n; i++) {
        a.push_back(i + 2 * n);
    }
    return a;
}

std::map<long, long> make_a_map(long n) {
    std::map<long, long> a;
    for (long i = 0; i < n; i++) {
        a[i + 2 * n] = i;
    }
    return a;
}

std::set<long> make_a_set(long n) {
    std::set<long> a;
    for (long i = 0; i < n; i++) {
        a.insert(i + 2 * n);
    }
    return a;
}

std::unordered_map<long, long> make_a_unordered_map(long n) {
    std::unordered_map<long, long> a;
    for (long i = 0; i < n; i++) {
        a[i + 2 * n] = i;
    }
    return a;
}

std::unordered_set<long> make_a_unordered_set(long n) {
    std::unordered_set<long> a;
    for (long i = 0; i < n; i++) {
        a.insert(i + 2 * n);
    }
    return a;
}

std::vector<long> make_a_vector(long n) {
    std::vector<long> a;
    for (long i = 0; i < n; i++) {
        a.push_back(i + 2 * n);
    }
    return a;
}

std::vector<long> make_a_vector(long n, long m) {
    std::vector<long> a;
    for (long i = 0; i < n; i++) {
        a.push_back(i + 2 * n);
    }
    for (long i = 0; i < m; i++) {
        a.push_back(i + 2 * n);
    }
    return a;
}

std::vector<long> make_a_vector(long n, long m, long k) {
    std::vector<long> a;
    for (long i = 0; i < n; i++) {
        a.push_back(i + 2 * n);
    }
    for (long i = 0; i < m; i++) {
        a.push_back(i + 2 * n);
    }
    for (long i = 0; i < k; i++) {
        a.push_back(i + 2 * n);
    }
    return a;
}

std::vector<long> make_a_vector(long n, long m, long k, long l) {
    std::vector<long> a;
    for (long i = 0; i < n; i++) {
        a.push_back(i + 2 * n);
    }
    for (long i = 0; i < m; i++) {
        a.push_back(i + 2 * n);
    }
    for (long i = 0; i < k; i++) {
        a.push_back(i + 2 * n);
    }
    for (long i = 0; i < l;