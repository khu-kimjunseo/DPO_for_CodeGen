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
long closest_integer(std::string value) {
    std::regex pattern("\\.0+$");
    value = std::regex_replace(value, pattern, "");
    double num = std::stod(value);
    if (value.back() == '5') {
        if (num > 0) {
            return std::ceil(num);
        } else {
            return std::floor(num);
        }
    } else {
        return std::round(num);
    }
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
    public static long closestInteger(String value) {
        long result = 0;
        for (int i = 0; i < value.length(); i++) {
            char c = value.charAt(i);
            if (c >= '0' && c <= '9') {
                result = result * 10 + c - '0';
            } else {
                break;
            }
        }
        return result;
    }
}

class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        int[] b = new int[m];
        for (int i = 0; i < m; i++) {
            b[i] = in.nextInt();
        }
        long result = Problem.closestInteger(String.valueOf(a));
        System.out.println(result);
    }
}
