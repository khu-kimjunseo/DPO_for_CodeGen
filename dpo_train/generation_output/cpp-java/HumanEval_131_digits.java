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
long digits(long n) {
    long product = 1;
    int odd_count = 0;
    for (char digit : std::to_string(n)) {
        int int_digit = digit - '0';
        if (int_digit % 2 == 1) {
            product *= int_digit;
            odd_count++;
        }
    }
    return odd_count == 0 ? 0 : product;
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
    public static long digits(long n) {
        long product = 1;
        int odd_count = 0;
        for (char digit : std::to_string(n)) {
            int int_digit = digit - '0';
            if (int_digit % 2 == 1) {
                product *= int_digit;
                odd_count++;
            }
        }
        return odd_count == 0 ? 0 : product;
    }
}

class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        long result = Problem.digits(n);
        System.out.println(result);
    }
}
