### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string intersection(std::tuple<long, long> interval1, std::tuple<long, long> interval2) {
    auto is_prime = [](long num) {
        if (num == 1 || num == 0) {
            return false;
        }
        if (num == 2) {
            return true;
        }
        for (long i = 2; i < num; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    };
    long l = std::max(std::get<0>(interval1), std::get<0>(interval2));
    long r = std::min(std::get<1>(interval1), std::get<1>(interval2));
    long length = r - l;
    if (length > 0 && is_prime(length)) {
        return "YES";
    }
    return "NO";
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
    public static String intersection(Pair<Long, Long> interval1, Pair<Long, Long> interval2) {
        long l = Math.max(interval1.getValue0(), interval2.getValue0());
        long r = Math.min(interval1.getValue1(), interval2.getValue1());
        long length = r - l;
        if (length > 0 && isPrime(length)) {
            return "YES";
        }
        return "NO";
    }

    private static boolean isPrime(long n) {
        if (n == 1 || n == 0) {
            return false;
        }
        if (n == 2) {
            return true;
        }
        for (long i = 2; i < n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
    

}
