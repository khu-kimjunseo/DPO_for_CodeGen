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
bool is_sorted(std::vector<long> lst) {
    std::vector<long>::iterator it = lst.begin();
    std::vector<long>::iterator it_end = lst.end();
    while (it != it_end) {
        if (*it < *it) {
            return false;
        }
        ++it;
    }
    return true;
}

bool is_sorted(std::vector<int> lst) {
    std::vector<int>::iterator it = lst.begin();
    std::vector<int>::iterator it_end = lst.end();
    while (it != it_end) {
        if (*it < *it) {
            return false;
        }
        ++it;
    }
    return true;
}

bool is_sorted(std::vector<int> lst) {
    std::vector<int>::iterator it = lst.begin();
    std::vector<int>::iterator it_end = lst.end();
    while (it != it_end) {
        if (*it < *it) {
            return false;
        }
        ++it;
    }
    return true;
}

bool is_sorted(std::vector<int> lst) {
    std::vector<int>::iterator it = lst.begin();
    std::vector<int>::iterator it_end = lst.end();
    while (it != it_end) {
        if (*it < *it) {
            return false;
        }
        ++it;
    }
    return true;
}

bool is_sorted(std::vector<int> lst) {
    std::vector<int>::iterator it = lst.begin();
    std::vector<int>::iterator it_end = lst.end();
    while (it != it_end) {
        if (*it < *it) {
            return false;
        }
        ++it;
    }
    return true;
}

bool is_sorted(std::vector<int> lst) {
    std::vector<int>::iterator it = lst.begin();
    std::vector<int>::iterator it_end = lst.end();
    while (it != it_end) {
        if (*it < *it) {
            return false;
        }
        ++it;
    }
    return true;
}

bool is_sorted(std::vector<int> lst) {
    std::vector<int>::iterator it = lst.begin();
    std::vector<int>::iterator it_end = lst.end();
    while (it != it_end) {
        if (*it < *it) {
            return false;
        }
        