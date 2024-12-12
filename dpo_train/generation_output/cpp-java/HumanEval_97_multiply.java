### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long multiply(long a, long b) {
    return abs(a % 10) * abs(b % 10);
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
    public static long multiply(long a, long b) {
        return a * b;
    }
}

class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        long a = in.nextLong();
        long b = in.nextLong();
        long result = Problem.multiply(a, b);
        System.out.println(result);
    }
}
