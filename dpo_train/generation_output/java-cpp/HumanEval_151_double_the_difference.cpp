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
    long double sum = 0;
    for (auto i : lst) {
        sum += i;
    }
    return sum;
}

#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map