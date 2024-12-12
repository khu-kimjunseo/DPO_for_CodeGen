### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool is_sorted(std::vector<long> lst) {
    std::map<long, long> count_digit;
    for (auto i: lst) {
        count_digit[i]++;
    }
    for (auto i: lst) {
        if (count_digit[i] > 2) {
            return false;
        }
    }
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i-1] > lst[i]) {
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
    public static boolean isSorted(ArrayList<Long> lst) {
        HashMap<Long, Long> count_digit = new HashMap<Long, Long>();
        for (long i : lst) {
            if (count_digit.containsKey(i)) {
                count_digit.put(i, count_digit.get(i) + 1);
            } else {
                count_digit.put(i, 1L);
            }
        }
        for (long i : lst) {
            if (count_digit.get(i) > 2) {
                return false;
            }
        }
        for (int i = 1; i < lst.size(); i++) {
            if (lst.get(i - 1) > lst.get(i)) {
                return false;
            }
        }
        return true;
    }
    

}

