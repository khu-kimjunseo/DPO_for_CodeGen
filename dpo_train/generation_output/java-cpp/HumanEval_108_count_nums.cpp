### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long countNums(ArrayList<Long> arr) {
        return arr.stream().map(i -> digitsSum(i)).filter(i -> i > 0).count();
    }

    private static long digitsSum(long n) {
        long neg = 1;
        if (n < 0) {
            n = -1 * n;
            neg = -1;
        }
        String[] digits = Long.toString(n).split("");
        digits[0] = Long.toString(Long.parseLong(digits[0]) * neg);
        return Arrays.stream(digits).mapToLong(Long::parseLong).sum();
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
long count_nums(std::vector<long> arr) {
    std::unordered_map<long, long> map;
    std::unordered_set<long> set;
    std::vector<long>::iterator it;
    for (it = arr.begin(); it != arr.end(); ++it) {
        map[*it] = 1;
    }
    for (it = arr.begin(); it != arr.end(); ++it) {
        set.insert(*it);
    }
    long sum = 0;
    for (it = arr.begin(); it != arr.end(); ++it) {
        sum += map[*it];
    }
    return sum;
}

int main() {
    std::vector<long> arr;
    std::vector<long>::iterator it;
    std::vector<long>::iterator it2;
    std::vector<long>::iterator it3;
    std::vector<long>::iterator it4;
    std::vector<long>::iterator it5;
    std::vector<long>::iterator it6;
    std::vector<long>::iterator it7;
    std::vector<long>::iterator it8;
    std::vector<long>::iterator it9;
    std::vector<long>::iterator it10;
    std::vector<long>::iterator it11;
    std::vector<long>::iterator it12;
    std::vector<long>::iterator it13;
    std::vector<long>::iterator it14;
    std::vector<long>::iterator it15;
    std::vector<long>::iterator it16;
    std::vector<long>::iterator it17;
    std::vector<long>::iterator it18;
    std::vector<long>::iterator it19;
    std::vector<long>::iterator it20;
    std::vector<long>::iterator it21;
    std::vector<long>::iterator it22;
    std::vector<long>::iterator it23;
    std::vector<long>::iterator it24;
    std::vector<long>::iterator it25;
    std::vector<long>::iterator it26;
    std::vector<long>::iterator it27;
    std::vector<long>::iterator it28;
    std::vector<long>::iterator it29;
    std::vector<long>::iterator it30;
    std::vector<long>::iterator it31;
    std::vector<long>::iterator it32;
    std::vector<long>::iterator it33;
    std::vector<long>::iterator it34;
    std::vector<long>::iterator it35;
    std::vector<long>::iterator it36;
    std::vector<long>::iterator it37;
    std::vector<long>::iterator it38;
    std::vector<long>::iterator it39;
    std::vector<long>::iterator it40;
    std::vector<long>::iterator it41;
    std::vector<long