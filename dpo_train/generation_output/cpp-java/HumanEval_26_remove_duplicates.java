### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> remove_duplicates(std::vector<long> numbers) {
    std::map<long, long> c;
    for (auto n : numbers) {
        c[n]++;
    }
    std::vector<long> result;
    for (auto n : numbers) {
        if (c[n] <= 1) {
            result.push_back(n);
        }
    }
    return result;
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
    public static ArrayList<Long> removeDuplicates(ArrayList<Long> numbers) {
        ArrayList<Long> result = new ArrayList<>();
        for (long n : numbers) {
            if (result.contains(n)) {
                continue;
            }
            result.add(n);
        }
        return result;
    }
}

class Solution {
    public static void main(String[] args) {
        long[] numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        ArrayList<Long> result = Problem.removeDuplicates(numbers);
        for (long n : result) {
            System.out.println(n);
        }
    }
}
