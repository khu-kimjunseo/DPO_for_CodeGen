### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string circular_shift(long x, long shift) {
    std::string s = std::to_string(x);
    if (shift > s.size()) {
        return std::string(s.rbegin(), s.rend());
    } else {
        return s.substr(s.size() - shift) + s.substr(0, s.size() - shift);
    }
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
    public static String circularShift(long x, long shift) {
        String s = Long.toString(x);
        if (shift > s.length()) {
            return new StringBuilder(s).reverse().toString();
        }
        return s.substring((int) (s.length() - shift)) + s.substring(0, (int) (s.length() - shift));
    }
    
    

}

