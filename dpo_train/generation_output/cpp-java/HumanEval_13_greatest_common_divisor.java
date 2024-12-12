### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long greatest_common_divisor(long a, long b) {
    while (b) {
        long temp = a % b; a = b; b = temp;
    }
    return a;
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
    public static long greatestCommonDivisor(long a, long b) {
        long result = 1;
        while (b) {
            long temp = a % b;
            a = b; b = temp;
            result = temp;
        }
        return result;
    }
}

class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        long a = in.nextLong();
        long b = in.nextLong();
        long result = Problem.greatestCommonDivisor(a, b);
        System.out.println(result);
    }
}
