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
    std::unordered_map<long, long> map;
    std::unordered_set<long> set;
    std::vector<long> temp;
    std::vector<long>::iterator it;
    std::vector<long>::iterator end;
    std::vector<long>::iterator it2;
    std::vector<long>::iterator end2;
    std::vector<long>::iterator it3;
    std::vector<long>::iterator end3;
    std::vector<long>::iterator it4;
    std::vector<long>::iterator end4;
    std::vector<long>::iterator it5;
    std::vector<long>::iterator end5;
    std::vector<long>::iterator it6;
    std::vector<long>::iterator end6;
    std::vector<long>::iterator it7;
    std::vector<long>::iterator end7;
    std::vector<long>::iterator it8;
    std::vector<long>::iterator end8;
    std::vector<long>::iterator it9;
    std::vector<long>::iterator end9;
    std::vector<long>::iterator it10;
    std::vector<long>::iterator end10;
    std::vector<long>::iterator it11;
    std::vector<long>::iterator end11;
    std::vector<long>::iterator it12;
    std::vector<long>::iterator end12;
    std::vector<long>::iterator it13;
    std::vector<long>::iterator end13;
    std::vector<long>::iterator it14;
    std::vector<long>::iterator end14;
    std::vector<long>::iterator it15;
    std::vector<long>::iterator end15;
    std::vector<long>::iterator it16;
    std::vector<long>::iterator end16;
    std::vector<long>::iterator it17;
    std::vector<long>::iterator end17;
    std::vector<long>::iterator it18;
    std::vector<long>::iterator end18;
    std::vector<long>::iterator it19;
    std::vector<long>::iterator end19;
    std::vector<long>::iterator it20;
    std::vector<long>::iterator end20;
    std::vector<long>::iterator it21;
    std::vector<long>::iterator end21;
    std::vector<long>::iterator it22;
    std::vector<long>::iterator end22;
    std::vector<long>::iterator it23;
    std::vector<long>::iterator end23;
    std::vector<long>::iterator it24;
    std::vector<long>::iterator end24;
    std::vector<long>::iterator it25;
    std::vector<long>::iterator end25;
    std::vector<long>::iterator it26;
    std::vector<long>::iterator end26;
    std::vector<long>::iterator it27;
    std::vector<long>::iterator end