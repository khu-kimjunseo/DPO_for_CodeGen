### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long largest_divisor(long n) {
    for(long i=n-1;i>=1;i--) {
        if(n%i==0) {
            return i;
        }
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
    public static long largestDivisor(long n) {
        long result = 1;
        for(long i=1;i<=n;i++) {
            result *= i;
        }
        return result;
    }
}

class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        long result = Problem.largestDivisor(n);
        System.out.println(result);
    }
}
