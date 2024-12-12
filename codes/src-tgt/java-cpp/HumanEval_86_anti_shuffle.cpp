### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String antiShuffle(String s) {
        return Arrays.stream(s.split(" ")).map(i -> new String(i.chars().sorted().toArray(), 0, i.length())).collect(Collectors.joining(" "));
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
std::string anti_shuffle(std::string s) {
    std::stringstream ss(s);
    std::string word, res;
    while (ss >> word) {
        std::sort(word.begin(), word.end());
        res += word + " ";
    }
    res.pop_back();
    return res;
}

