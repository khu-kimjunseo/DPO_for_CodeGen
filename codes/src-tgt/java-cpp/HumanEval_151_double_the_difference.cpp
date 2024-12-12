### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long doubleTheDifference(ArrayList<Float> lst) {
        return lst.stream().filter(i -> i > 0 && i%2!=0 && i == Math.floor(i)).mapToLong(i -> (long) Math.pow(i, 2)).sum();
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
long double_the_difference(std::vector<float> lst) {
    long sum = 0;
    for (auto i : lst) {
        if (i > 0 && int(i)%2!=0 && i == int(i)) {
            sum += pow(i, 2);
        }
    }
    return sum;
}

