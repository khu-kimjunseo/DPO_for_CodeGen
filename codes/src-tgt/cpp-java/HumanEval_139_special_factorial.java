### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long special_factorial(long n) {
    long fact_i = 1;
    long special_fact = 1;
    for(long i = 1; i <= n; i++) {
        fact_i *= i;
        special_fact *= fact_i;
    }
    return special_fact;
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
    public static long specialFactorial(long n) {
        long factI = 1;
        long specialFact = 1;
        for (long i = 1; i <= n; i++) {
            factI *= i;
            specialFact *= factI;
        }
        return specialFact;
    }
    

}

