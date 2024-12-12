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
        ArrayList<Long> result = new ArrayList<>();
        for (long i = 0; i < nums.size(); i++) {
            result.add(nums.get(i));
        }
        return result;
    }
}

class Solution {
    public static void main(String[] args) {
        long[] nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        ArrayList<Long> nums2 = Problem.order_by_points(nums);
        System.out.println(nums2);
    }
}
