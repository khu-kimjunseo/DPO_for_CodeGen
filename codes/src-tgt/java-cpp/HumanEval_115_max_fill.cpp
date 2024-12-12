### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long maxFill(ArrayList<ArrayList<Long>> grid, long capacity) {
        return grid.stream().mapToLong(arr -> (long)Math.ceil(arr.stream().mapToLong(x -> x).sum()/(double)capacity)).sum();
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
long max_fill(std::vector<std::vector<long>> grid, long capacity) {
    long sum = 0;
    for (auto arr : grid) {
        sum += ceil(std::accumulate(arr.begin(), arr.end(), 0.0) / capacity);
    }
    return sum;
}

