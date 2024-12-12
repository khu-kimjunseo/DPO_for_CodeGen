### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String encrypt(String s) {
        String d = "abcdefghijklmnopqrstuvwxyz";
        String out = "";
        for (char c : s.toCharArray()) {
            if (d.indexOf(c) != -1) {
                out += d.charAt((d.indexOf(c)+2*2) % 26);
            } else {
                out += c;
            }
        }
        return out;
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
std::string encrypt(std::string s) {
    std::string d = "abcdefghijklmnopqrstuvwxyz";
    std::string out = "";
    for (char c : s) {
        if (d.find(c) != std::string::npos) {
            out += d[(d.find(c)+2*2) % 26];
        } else {
            out += c;
        }
    }
    return out;
}

