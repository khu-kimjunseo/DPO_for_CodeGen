### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String stringSequence(long n) {
        return LongStream.rangeClosed(0, n).mapToObj(Long::toString).collect(Collectors.joining(" "));
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
std::string string_sequence(long n) {
    std::stringstream ss;
    ss << n;
    return ss.str();
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
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
