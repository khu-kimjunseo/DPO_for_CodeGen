### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::tuple<long, long> even_odd_count(long num) {
    long even_count = 0;
    long odd_count = 0;
    for (auto i: std::to_string(abs(num))) {
        if (int(i)%2==0) {
            even_count +=1;
        } else {
            odd_count +=1;
        }
    }
    return std::make_tuple(even_count, odd_count);
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
    public static Pair<Long, Long> evenOddCount(long num) {
        long even_count = 0;
        long odd_count = 0;
        for (auto i: std::to_string(abs(num))) {
            if (int(i)%2==0) {
                even_count +=1;
            } else {
                odd_count +=1;
            }
        }
        return std::make_pair(even_count, odd_count);
    }
}

class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        long[] nums = new long[n];
        for (int i = 0; i < n; i++) {
            nums[i] = in.nextLong();
        }
        long[] even_odd_count = Problem.evenOddCount(nums);
        System.out.println(even_odd_count);
    }
}
