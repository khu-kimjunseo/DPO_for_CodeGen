### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean isPalindrome(String text) {
        StringBuilder sb = new StringBuilder(text);
        return text.equals(sb.reverse().toString());
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
bool is_palindrome(std::string text) {
    std::string::iterator it = text.begin();
    std::string::iterator end = text.end();
    while (it != end) {
        if (*it != *(it + 1)) {
            return false;
        }
        ++it;
    }
    return true;
}

int main() {
    std::string s1 = "Hello, World!";
    std::string s2 = "Hello, World!";
    std::string s3 = "Hello, World!";
    std::string s4 = "Hello, World!";
    std::string s5 = "Hello, World!";
    std::string s6 = "Hello, World!";
    std::string s7 = "Hello, World!";
    std::string s8 = "Hello, World!";
    std::string s9 = "Hello, World!";
    std::string s10 = "Hello, World!";
    std::string s11 = "Hello, World!";
    std::string s12 = "Hello, World!";
    std::string s13 = "Hello, World!";
    std::string s14 = "Hello, World!";
    std::string s15 = "Hello, World!";
    std::string s16 = "Hello, World!";
    std::string s17 = "Hello, World!";
    std::string s18 = "Hello, World!";
    std::string s19 = "Hello, World!";
    std::string s20 = "Hello, World!";
    std::string s21 = "Hello, World!";
    std::string s22 = "Hello, World!";
    std::string s23 = "Hello, World!";
    std::string s24 = "Hello, World!";
    std::string s25 = "Hello, World!";
    std::string s26 = "Hello, World!";
    std::string s27 = "Hello, World!";
    std::string s28 = "Hello, World!";
    std::string s29 = "Hello, World!";
    std::string s30 = "Hello, World!";
    std::string s31 = "Hello, World!";
    std::string s32 = "Hello, World!";
    std::string s33 = "Hello, World!";
    std::string s34 = "Hello, World!";
    std::string s35 = "Hello, World!";
    std::string s36 = "Hello, World!";
    std::string s37 = "Hello, World!";
    std::string s38 = "Hello, World!";
    std::string s39 = "Hello, World!";
    std::string s40 = "Hello, World!";
    std::string s41 = "Hello, World!";
    std::string s42 = "Hello, World!";
    std::string s43 = "Hello, World!";
    std::string s44 = "Hello, World!";
    std::string s45 = "Hello, World!";
    std::string s46 = "Hello, World!";
    std::string s47 = "Hello, World!";
    std::string s48 = "Hello, World!";
    std::string s49 = "Hello, World!";
    std::string s50 = "Hello, World!";
    std::string s51 = "Hello, World!";
    std::string s52 = "Hello, World!";
    std::string s53 = "Hello, World!";
    std