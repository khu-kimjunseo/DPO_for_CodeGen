### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean isSimplePower(long x, long n) {
        if (n == 1) return (x == 1);
        long power = 1;
        while (power < x) power = power * n;
        return (power == x);
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
bool is_simple_power(long x, long n) {
    if (n == 1) return (x == 1);
    long power = 1;
    while (power < x) power = power * n;
    return (power == x);
}

int main() {
    
    int n;
    std::cin >> n;
    
    std::vector<int> v;
    std::vector<int>::iterator it;
    
    for (int i = 0; i < n; i++) {
        std::cin >> v.at(i);
    }
    
    std::set<int> s;
    std::set<int>::iterator it;
    
    for (int i = 0; i < n; i++) {
        std::cin >> s.at(i);
    }
    
    std::map<int, int> m;
    std::map<int, int>::iterator it;
    
    for (int i = 0; i < n; i++) {
        std::cin >> m.at(i);
    }
    
    std::unordered_map<int, int> u;
    std::unordered_map<int, int>::iterator it;
    
    for (int i = 0; i < n; i++) {
        std::cin >> u.at(i);
    }
    
    std::unordered_set<int> s2;
    std::unordered_set<int>::iterator it;
    
    for (int i = 0; i < n; i++) {
        std::cin >> s2.at(i);
    }
    
    std::unordered_map<int, int> m2;
    std::unordered_map<int, int>::iterator it2;
    
    for (int i = 0; i < n; i++) {
        std::cin >> m2.at(i);
    }
    
    std::unordered_set<int> s3;
    std::unordered_set<int>::iterator it3;
    
    for (int i = 0; i < n; i++) {
        std::cin >> s3.at(i);
    }
    
    std::unordered_map<int, int> m3;
    std::unordered_map<int, int>::iterator it3;
    
    for (int i = 0; i < n; i++) {
        std::cin >> m3.at(i);
    }
    
    std::unordered_set<int> s4;
    std::unordered_set<int>::iterator it4;
    
    for (int i = 0; i < n; i++) {
        std::cin >> s4.at(i);
    }
    
    std::unordered_map<int, int> m4;
    std::unordered_map<int, int>::iterator it4;
    
    for (int i = 0; i < n; i++) {
        std::cin >> m4.at(i);
    }
    
    std::unordered_set<int> s5;
    std::unordered_set<int>::iterator it5;
    
    for (int i = 0; i < n; i++) {
        std::cin >> s5.at(i);
    }
    
    std::unordered_map<int, int> m5;
    std