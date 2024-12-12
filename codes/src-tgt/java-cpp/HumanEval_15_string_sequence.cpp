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
std::string string_sequence(long n) {
    std::string result = "";
    for (long i = 0; i <= n; i++) {
        result += std::to_string(i);
        if (i != n) {
            result += " ";
        }
    }
    return result;
}

