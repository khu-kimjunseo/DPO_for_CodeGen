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
std::string change_base(long x, long base) {
    std::string ret;
    while (x > 0) {
        ret = std::to_string(x % base) + ret;
        x /= base;
    }
    return ret;
}

