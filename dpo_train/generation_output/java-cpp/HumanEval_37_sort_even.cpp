### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> sortEven(ArrayList<Long> l) {
        ArrayList<Long> evens = new ArrayList<Long>();
        ArrayList<Long> odds = new ArrayList<Long>();
        for (int i = 0; i < l.size(); i++) {
            if (i % 2 == 0) {
                evens.add(l.get(i));
            } else {
                odds.add(l.get(i));
            }
        }
        Collections.sort(evens);
        ArrayList<Long> ans = new ArrayList<Long>();
        for (int i = 0; i < evens.size(); i++) {
            ans.add(evens.get(i));
            if (i < odds.size()) {
                ans.add(odds.get(i));
            }
        }
        return ans;
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
std::vector<long> sort_even(std::vector<long> l) {
    std::vector<long> ans = l;
    std::sort(ans.begin(), ans.end());
    return ans;
}

std::map<long, long> sort_even(std::map<long, long> m) {
    std::map<long, long> ans = m;
    std::sort(ans.begin(), ans.end());
    return ans;
}

std::set<long> sort_even(std::set<long> s) {
    std::set<long> ans = s;
    std::sort(ans.begin(), ans.end());
    return ans;
}

std::unordered_map<long, long> sort_even(std::unordered_map<long, long> m) {
    std::unordered_map<long, long> ans = m;
    std::sort(ans.begin(), ans.end());
    return ans;
}

std::unordered_set<long> sort_even(std::unordered_set<long> s) {
    std::unordered_set<long> ans = s;
    std::sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    std::vector<long> v = sort_even(std::vector<long>());
    std::map<long, long> m = sort_even(std::map<long, long>());
    std::set<long> s = sort_even(std::set<long>());
    std::unordered_map<long, long> u = sort_even(std::unordered_map<long, long>());
    std::unordered_set<long> us = sort_even(std::unordered_set<long>());
    std::cout << "v: " << v << std::endl;
    std::cout << "m: " << m << std::endl;
    std::cout << "s: " << s << std::endl;
    std::cout << "u: " << u << std::endl;
    std::cout << "us: " << us << std::endl;
    return 0;
}
