### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean sameChars(String s0, String s1) {
        return new HashSet<>(Arrays.asList(s0.split(""))).equals(new HashSet<>(Arrays.asList(s1.split(""))));
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
bool same_chars(std::string s0, std::string s1) {
    return std::set<char>(s0.begin(), s0.end()) == std::set<char>(s1.begin(), s1.end());
}

