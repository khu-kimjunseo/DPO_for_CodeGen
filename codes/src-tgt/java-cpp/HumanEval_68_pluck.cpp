### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> pluck(ArrayList<Long> arr) {
        if (arr.size() == 0) return new ArrayList<Long>();
        List<Long> evens = arr.stream().filter(x -> x % 2 == 0).collect(Collectors.toList());
        if (evens.size() == 0) return new ArrayList<Long>();
        long min = Collections.min(evens);
        return new ArrayList<Long>(Arrays.asList(min, (long) arr.indexOf(min)));
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
std::vector<long> pluck(std::vector<long> arr) {
    if(arr.size() == 0) return {};
    std::vector<long> evens;
    for(auto x: arr) if(x%2 == 0) evens.push_back(x);
    if(evens.size() == 0) return {};
    long min_val = *std::min_element(evens.begin(), evens.end());
    return {min_val, std::find(arr.begin(), arr.end(), min_val) - arr.begin()};
}

