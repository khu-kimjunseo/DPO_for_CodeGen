### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long choose_num(long x, long y) {
    if (x > y) {
        return -1;
    }
    if (y % 2 == 0) {
        return y;
    }
    if (x == y) {
        return -1;
    }
    return y - 1;
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
    public static long chooseNum(long x, long y) {
        return choose_num(x, y);
    }
    public static long choose_num(long x, long y) {
        if (x == y) {
            return x;
        }
        if (x % 2 == 0) {
            return x;
        }
        if (y % 2 == 0) {
            return y;
        }
        return y - 1;
    }
}

class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        int[] nums = new int[n];
        for (int i = 0; i < n; i++) {
            nums[i] = in.nextInt();
        }
        long[] nums2 = new long[m];
        for (int i = 0; i < m; i++) {
            nums2[i] = in.nextInt();
        }
        long res = Problem.chooseNum(nums, nums2);
        System.out.println(res);
    }
}
