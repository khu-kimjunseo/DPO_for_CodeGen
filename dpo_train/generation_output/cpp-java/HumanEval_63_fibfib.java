### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long fibfib(long n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    return fibfib(n - 1) + fibfib(n - 2) + fibfib(n - 3);
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
    public static long fibfib(long n) {
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        return fibfib(n - 1) + fibfib(n - 2) + fibfib(n - 3);
    }
}

class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        long res = Problem.fibfib(n);
        System.out.println(res);
    }
}
