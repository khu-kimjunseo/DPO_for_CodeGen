### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> factorize(long n) {
        ArrayList<Long> fact = new ArrayList<>();
        long i = 2;
        while (i <= n) {
            if (n % i == 0) {
                fact.add(i);
                n /= i;
            } else {
                i++;
            }
        }
        return fact;
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
std::vector<long> factorize(long n) {
    std::vector<long> fact;
    long i = 2;
    while (i <= sqrt(n) + 1) {
        if (n % i == 0) {
            fact.push_back(i);
            n /= i;
        } else {
            i++;
        }
    }
    if (n > 1) {
        fact.push_back(n);
    }
    return fact;
}

