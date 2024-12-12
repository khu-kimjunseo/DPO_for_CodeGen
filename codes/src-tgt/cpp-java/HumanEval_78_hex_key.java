### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long hex_key(std::string num) {
    std::string primes = "2357BD";
    int total = 0;
    for (int i = 0; i < num.length(); i++) {
        if (primes.find(num[i]) != std::string::npos) {
            total++;
        }
    }
    return total;
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
    public static long hexKey(String num) {
        String primes = "2357BD";
        long total = 0;
        for (int i = 0; i < num.length(); i++) {
            if (primes.indexOf(num.charAt(i)) >= 0) {
                total++;
            }
        }
        return total;
    }
    

}

