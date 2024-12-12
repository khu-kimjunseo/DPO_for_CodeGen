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
long hex_key(std::string num) {
    std::stringstream ss;
    ss << num;
    std::string num_str = ss.str();
    std::string num_hex = num_str.substr(0,2);
    long total = 0;
    for (int i = 0; i < num_hex.length(); i++) {
        total += (long)num_hex.at(i) * (long)num_str.at(i);
    }
    return total;
}

int main() {
    std::string num = "123456789";
    std::string num_hex = num.substr(0,2);
    long num_key = hex_key(num_hex);
    std::cout << "key: " << num_key << std::endl;
    return 0;
}
