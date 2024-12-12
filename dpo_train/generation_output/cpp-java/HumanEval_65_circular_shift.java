### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string circular_shift(long x, long shift) {
    std::string s = std::to_string(x);
    if (shift > s.size()) {
        return std::string(s.rbegin(), s.rend());
    } else {
        return s.substr(s.size() - shift) + s.substr(0, s.size() - shift);
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
    public static String circularShift(long x, long shift) {
        return circular_shift(x, shift);
    }
}

class Solution {
    public static void main(String[] args) {
        long[] a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] b = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] c = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] d = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] e = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] f = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] g = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] h = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] i = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] j = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] k = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] l = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] m = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] n = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] o = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] p = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] q = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] r = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] s = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] t = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] u = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] w = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] z = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] b = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};