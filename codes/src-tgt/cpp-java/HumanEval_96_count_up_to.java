### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> count_up_to(long n) {
    std::vector<long> primes;
    for (long i = 2; i < n; i++) {
        bool is_prime = true;
        for (long j = 2; j < i; j++) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            primes.push_back(i);
        }
    }
    return primes;
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
    public static ArrayList<Long> countUpTo(long n) {
        ArrayList<Long> primes = new ArrayList<>();
        for (long i = 2; i < n; i++) {
            boolean isPrime = true;
            for (long j = 2; j < i; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                primes.add(i);
            }
        }
        return primes;
    }
    

}

