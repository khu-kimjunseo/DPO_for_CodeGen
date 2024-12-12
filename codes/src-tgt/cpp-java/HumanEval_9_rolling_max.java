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
std::vector<long> rolling_max(std::vector<long> numbers) {
    std::vector<long> result;
    long running_max = 0;
    for (long n : numbers) {
        running_max = std::max(running_max, n);
        result.push_back(running_max);
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
    public static ArrayList<Long> rollingMax(ArrayList<Long> numbers) {
        long running_max = Long.MIN_VALUE;
        ArrayList<Long> result = new ArrayList<Long>();

        for (long n : numbers) {
            running_max = Math.max(running_max, n);
            result.add(running_max);
        }

        return result;
    }
    

}

