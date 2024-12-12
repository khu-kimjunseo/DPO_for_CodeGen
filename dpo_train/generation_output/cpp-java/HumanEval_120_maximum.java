### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> maximum(std::vector<long> arr, long k) {
    if (k == 0) {
        return {};
    }
    std::sort(arr.begin(), arr.end());
    std::vector<long> ans(arr.end() - k, arr.end());
    return ans;
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
    public static ArrayList<Long> maximum(ArrayList<Long> arr, long k) {
        ArrayList<Long> ans = new ArrayList<>();
        for (long i = 0; i < arr.size(); i++) {
            if (arr.get(i) > k) {
                ans.add(arr.get(i));
            }
        }
        return ans;
    }
}

class Solution {
    public static void main(String[] args) {
        long[] arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long k = 9;
        System.out.println(Problem.maximum(arr, k));
    }
}
