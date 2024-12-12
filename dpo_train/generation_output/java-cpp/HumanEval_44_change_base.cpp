### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String changeBase(long x, long base) {
        String ret = "";
        while (x > 0) {
            ret = x % base + ret;
            x /= base;
        }
        return ret;
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
std::string change_base(long x, long base) {
    std::string ret = "";
    while (x > 0) {
        ret = x % base + ret;
        x /= base;
    }
    return ret;
}

int main() {
    
    std::string s = "";
    std::stringstream ss;
    ss << "hello";
    ss >> s;
    assert(s == "hello");
    
    std::string s1 = "";
    std::stringstream ss1;
    ss1 << "hello";
    ss1 >> s1;
    assert(s1 == "hello");
    
    std::string s2 = "";
    std::stringstream ss2;
    ss2 << "hello";
    ss2 >> s2;
    assert(s2 == "hello");
    
    std::string s3 = "";
    std::stringstream ss3;
    ss3 << "hello";
    ss3 >> s3;
    assert(s3 == "hello");
    
    std::string s4 = "";
    std::stringstream ss4;
    ss4 << "hello";
    ss4 >> s4;
    assert(s4 == "hello");
    
    std::string s5 = "";
    std::stringstream ss5;
    ss5 << "hello";
    ss5 >> s5;
    assert(s5 == "hello");
    
    std::string s6 = "";
    std::stringstream ss6;
    ss6 << "hello";
    ss6 >> s6;
    assert(s6 == "hello");
    
    std::string s7 = "";
    std::stringstream ss7;
    ss7 << "hello";
    ss7 >> s7;
    assert(s7 == "hello");
    
    std::string s8 = "";
    std::stringstream ss8;
    ss8 << "hello";
    ss8 >> s8;
    assert(s8 == "hello");
    
    std::string s9 = "";
    std::stringstream ss9;
    ss9 << "hello";
    ss9 >> s9;
    assert(s9 == "hello");
    
    std::string s10 = "";
    std::stringstream ss10;
    ss10 << "hello";
    ss10 >> s10;
    assert(s10 == "hello");
    
    std::string s11 = "";
    std::stringstream ss11;
    ss11 << "hello";
    ss11 >> s11;
    assert(s11 == "hello");
    
    std::string s12 = "";
    std::stringstream ss12;
    ss12 << "hello";
    ss12 >> s12;
    assert(s12 == "hello");
    
    std::string s13 = "";
    std::stringstream ss13;
    ss13 << "hello";
    ss13 >> s13;
    assert(s13 == "hello");
    
    std::string s14 = "";
    std::stringstream ss14;
    ss14 << "hello";
    ss14 >> s14;
    assert(s14 == "hello");
    
    std::string s15 = "";
    std::stringstream ss15;
    ss15 << "hello";
    ss15 >> s15;
    assert(s15 == "hello");
    
    std::string s