### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::tuple<long, long> sum_product(std::vector<long> numbers) {
    long sum_value = 0;
    long prod_value = 1;

    for (auto n: numbers) {
        sum_value += n;
        prod_value *= n;
    }
    return std::make_tuple(sum_value, prod_value);
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
    public static Pair<Long, Long> sumProduct(ArrayList<Long> numbers) {
        long sum = 0;
        long prod = 1;
        for (long n : numbers) {
            sum += n;
            prod *= n;
        }
        return Pair.with(sum, prod);
    }
    
    

}

