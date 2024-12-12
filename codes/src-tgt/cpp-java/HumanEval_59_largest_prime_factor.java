### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long largest_prime_factor(long n) {
    auto is_prime=[](long k){
        if(k<2) return false;
        for(long i=2;i<k;i++) if(k%i==0) return false;
        return true;
    };
    long largest=1;
    for(long j=2;j<=n;j++) if(n%j==0 && is_prime(j)) largest=std::max(largest,j);
    return largest;
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
    public static long largestPrimeFactor(long n) {
        long largest = 1;
        for (long j = 2; j <= n; j++) {
            if (n % j == 0 && isPrime(j)) {
                largest = Math.max(largest, j);
            }
        }
        return largest;
    }
    public static boolean isPrime(long k) {
        if (k < 2) return false;
        for (long i = 2; i < k; i++) {
            if (k % i == 0) return false;
        }
        return true;
    }
    

}

