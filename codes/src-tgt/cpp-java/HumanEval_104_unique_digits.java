### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> unique_digits(std::vector<long> x) {
    std::vector<long> odd_digit_elements;
    for (auto i : x) {
        bool is_odd = true;
        for (auto c : std::to_string(i)) {
            if (c % 2 == 0) {
                is_odd = false;
                break;
            }
        }
        if (is_odd) {
            odd_digit_elements.push_back(i);
        }
    }
    std::sort(odd_digit_elements.begin(), odd_digit_elements.end());
    return odd_digit_elements;
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
    public static ArrayList<Long> uniqueDigits(ArrayList<Long> x) {
        ArrayList<Long> oddDigitElements = new ArrayList<>();
        for (long i : x) {
            if (Long.toString(i).chars().allMatch(c -> c % 2 == 1)) {
                oddDigitElements.add(i);
            }
        }
        Collections.sort(oddDigitElements);
        return oddDigitElements;
    }
    

}

