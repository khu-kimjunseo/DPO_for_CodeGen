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
        if (k == 0) {
            return new ArrayList<Long>();
        }
        Collections.sort(arr);
        return new ArrayList<Long>(arr.subList(arr.size() - (int)k, arr.size()));
    }
    
    

}

