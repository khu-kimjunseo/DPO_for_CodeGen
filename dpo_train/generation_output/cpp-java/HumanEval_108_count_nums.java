### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long count_nums(std::vector<long> arr) {
    long count = 0;
    for (int i = 0; i < arr.size(); i++) {
        long n = arr[i];
        long neg = 1;
        if (n < 0) {
            n = -1 * n;
            neg = -1;
        }
        std::vector<long> digits;
        std::stringstream ss;
        ss << n;
        std::string str = ss.str();
        for (int j = 0; j < str.size(); j++) {
            digits.push_back(str[j] - '0');
        }
        digits[0] = digits[0] * neg;
        long sum = 0;
        for (int j = 0; j < digits.size(); j++) {
            sum += digits[j];
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
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
    public static long countNums(ArrayList<Long> arr) {
        long count = 0;
        for (int i = 0; i < arr.size(); i++) {
            long n = arr.get(i);
            long neg = 1;
            if (n < 0) {
                n = -1 * n;
                neg = -1;
            }
            count += n * neg;
        }
        return count;
    }
}

class Solution {
    public static void main(String[] args) {
        long n = Long.parseLong(args[0]);
        long m = Long.parseLong(args[1]);
        long result = Problem.countNums(new ArrayList<>(Arrays.asList(n, m)));
        System.out.println(result);
    }
}
