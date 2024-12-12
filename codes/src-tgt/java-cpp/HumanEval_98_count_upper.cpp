### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long countUpper(String s) {
        long count = 0;
        for (int i = 0; i < s.length(); i += 2) {
            if ("AEIOU".indexOf(s.charAt(i)) >= 0) {
                count++;
            }
        }
        return count;
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
long count_upper(std::string s) {
    long count = 0;
    for (int i = 0; i < s.size(); i += 2) {
        if (std::string("AEIOU").find(s[i]) != std::string::npos) {
            count += 1;
        }
    }
    return count;
}

