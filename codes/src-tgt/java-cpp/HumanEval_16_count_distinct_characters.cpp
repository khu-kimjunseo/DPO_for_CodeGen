### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long countDistinctCharacters(String string) {
        return string.toLowerCase().chars().distinct().count();
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
long count_distinct_characters(std::string string) {
    std::set<char> s;
    for (auto c : string) {
        s.insert(tolower(c));
    }
    return s.size();
}

