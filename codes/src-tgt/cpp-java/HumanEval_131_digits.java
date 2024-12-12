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
long digits(long n) {
    long product = 1;
    int odd_count = 0;
    for (char digit : std::to_string(n)) {
        int int_digit = digit - '0';
        if (int_digit % 2 == 1) {
            product *= int_digit;
            odd_count++;
        }
    }
    return odd_count == 0 ? 0 : product;
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
    public static long digits(long n) {
        long product = 1;
        int oddCount = 0;
        for (char c : Long.toString(n).toCharArray()) {
            int digit = Character.getNumericValue(c);
            if (digit % 2 == 1) {
                product *= digit;
                oddCount++;
            }
        }
        return oddCount == 0 ? 0 : product;
    }
    

}

