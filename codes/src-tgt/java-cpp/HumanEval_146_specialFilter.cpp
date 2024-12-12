### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long specialFilter(ArrayList<Long> nums) {
        long count = 0;
        for (long num : nums) {
            if (num > 10) {
                if (isOdd(num / (long) Math.pow(10, (long) Math.log10(num))) && isOdd(num % 10)) {
                    count++;
                }
            }
        }
        return count;
    }

    private static boolean isOdd(long n) {
        return n % 2 == 1;
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
long specialFilter(std::vector<long> nums) {
    long count = 0;
    for (auto num: nums) {
        if (num > 10) {
            std::string number_as_string = std::to_string(num);
            if (number_as_string.front() % 2 == 1 && number_as_string.back() % 2 == 1) {
                count++;
            }
        }
    }
    return count;
}

