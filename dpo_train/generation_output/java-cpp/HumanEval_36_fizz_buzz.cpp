### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long fizzBuzz(long n) {
        List<Long> ns = new ArrayList<>();
        for (long i = 0; i < n; i++) {
            if (i % 11 == 0 || i % 13 == 0) {
                ns.add(i);
            }
        }
        long s = ns.stream().map(i -> String.valueOf(i)).flatMapToInt(String::chars).filter(c -> c == '7').count();
        return s;
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
long fizz_buzz(long n) {
    long s = 0;
    for (long i = 0; i < n; i++) {
        if (i % 7 == 0 || i % 11 == 0) {
            s += i;
        }
    }
    return s;
}

int main() {
    long n = 1000000;
    long fizz = fizzBuzz(n);
    assert(fizz == fizz_buzz(n));
    return 0;
}
