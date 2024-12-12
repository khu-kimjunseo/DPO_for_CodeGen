### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool is_prime(long n) {
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

