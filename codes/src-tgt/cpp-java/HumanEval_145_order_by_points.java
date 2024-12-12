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
std::vector<long> order_by_points(std::vector<long> nums) {
    auto digits_sum = [](long n) -> long {
        long neg = 1;
        if (n < 0) {
            n = -1 * n;
            neg = -1;
        }
        std::stringstream ss;
        ss << n;
        std::string s = ss.str();
        std::vector<long> v;
        for (auto c : s) {
            v.push_back(c - '0');
        }
        v[0] = v[0] * neg;
        return std::accumulate(v.begin(), v.end(), 0);
    };
    std::sort(nums.begin(), nums.end(), [&](long a, long b) {
        return digits_sum(a) < digits_sum(b);
    });
    return nums;
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
    public static ArrayList<Long> orderByPoints(ArrayList<Long> nums) {
        return nums.stream().sorted((a, b) -> Long.compare(digitsSum(a), digitsSum(b))).collect(Collectors.toCollection(ArrayList::new));
    }
    private static long digitsSum(long n) {
        long neg = 1;
        if (n < 0) {
            n = -1 * n;
            neg = -1;
        }
        String s = Long.toString(n);
        long[] digits = new long[s.length()];
        for (int i = 0; i < s.length(); i++) {
            digits[i] = s.charAt(i) - '0';
        }
        digits[0] *= neg;
        return Arrays.stream(digits).sum();
    }
    

}

