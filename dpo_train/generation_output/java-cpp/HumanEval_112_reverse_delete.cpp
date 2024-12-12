### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Pair<String, Boolean> reverseDelete(String s, String c) {
        s = s.chars().filter(ch -> c.indexOf(ch) == -1).mapToObj(Character::toString).collect(Collectors.joining());
        return Pair.with(s, new StringBuilder(s).reverse().toString().equals(s));
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
std::tuple<std::string, bool> reverse_delete(std::string s, std::string c) {
    std::stringstream ss;
    ss << s;
    std::stringstream ss2;
    ss2 << c;
    std::string s2 = ss.str();
    std::string c2 = ss2.str();
    std::string s1 = s.substr(0, s.length() - c.length());
    std::string c1 = c.substr(0, c.length() - s.length());
    std::string s2_ = s2.substr(0, s2.length() - c2.length());
    std::string c2_ = c2.substr(0, c2.length() - s2.length());
    std::string s1_ = s1.substr(0, s1.length() - c1.length());
    std::string c1_ = c1.substr(0, c1.length() - s1.length());
    std::string s2_2 = s2_;
    std::string c2_2 = c2_;
    std::string s1_2 = s1_;
    std::string c1_2 = c1_;
    std::string s2_3 = s2_;
    std::string c2_3 = c2_;
    std::string s1_3 = s1_;
    std::string c1_3 = c1_;
    std::string s2_4 = s2_;
    std::string c2_4 = c2_;
    std::string s1_4 = s1_;
    std::string c1_4 = c1_;
    std::string s2_5 = s2_;
    std::string c2_5 = c2_;
    std::string s1_5 = s1_;
    std::string c1_5 = c1_;
    std::string s2_6 = s2_;
    std::string c2_6 = c2_;
    std::string s1_6 = s1_;
    std::string c1_6 = c1_;
    std::string s2_7 = s2_;
    std::string c2_7 = c2_;
    std::string s1_7 = s1_;
    std::string c1_7 = c1_;
    std::string s2_8 = s2_;
    std::string c2_8 = c2_;
    std::string s1_8 = s1_;
    std::string c1_8 = c1_;
    std::string s2_9 = s2_;
    std::string c2_9 = c2_;
    std::string s1_9 = s1_;
    std::string c1_9 = c1_;
    std::string s2_10 = s2_;
    std::string c2_10 = c2_;
    std::string s1_10 = s1_;
    std::string c1_10 = c1_;
    std::string s2_11 = s2_;
    std::string c2_11 = c2_;
    std::string s1_11 = s1_;
    std::string