### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean isPrime(long n) {
        if (n < 2) {
            return false;
        }
        for (long k = 2; k < n; k++) {
            if (n % k == 0) {
                return false;
            }
        }
        return true;
    }
}

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
bool is_prime(long n) {
    if (n == 1) {
        return true;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    if (n % 3 == 0) {
        return false;
    }
    if (n % 5 == 0) {
        return false;
    }
    if (n % 7 == 0) {
        return false;
    }
    if (n % 11 == 0) {
        return false;
    }
    if (n % 13 == 0) {
        return false;
    }
    if (n % 17 == 0) {
        return false;
    }
    if (n % 19 == 0) {
        return false;
    }
    if (n % 23 == 0) {
        return false;
    }
    if (n % 29 == 0) {
        return false;
    }
    if (n % 31 == 0) {
        return false;
    }
    if (n % 37 == 0) {
        return false;
    }
    if (n % 41 == 0) {
        return false;
    }
    if (n % 43 == 0) {
        return false;
    }
    if (n % 47 == 0) {
        return false;
    }
    if (n % 53 == 0) {
        return false;
    }
    if (n % 59 == 0) {
        return false;
    }
    if (n % 61 == 0) {
        return false;
    }
    if (n % 67 == 0) {
        return false;
    }
    if (n % 71 == 0) {
        return false;
    }
    if (n % 73 == 0) {
        return false;
    }
    if (n % 79 == 0) {
        return false;
    }
    if (n % 81 == 0) {
        return false;
    }
    if (n % 83 == 0) {
        return false;
    }
    if (n % 89 == 0) {
        return false;
    }
    if (n % 91 == 0) {
        return false;
    }
    if (n % 93 == 0) {
        return false;
    }
    if (n % 97 == 0) {
        return false;
    }
    if (n % 101 == 0) {
        return false;
    }
    if (n % 103 == 0) {
        return false;
    }
    if (n % 107 == 0) {
        return false;
    }
    if (n % 109 == 0) {
        return false;
    }
    if (n % 113 == 0) {
        return false;
    }
    if (n % 127 == 0) {
        return false;
    }
    if (n % 131 == 0) {
        return false;
    }
    if (n % 137 == 0) {
        return false;
    }
    if (n % 139 == 0) {
        return false;
    }
    if (n % 143 == 0) {
        return false;
    }
    if (n % 147 == 0) {
        return false;
    }
    if (n % 149 == 0) {
        return false;
    }
    