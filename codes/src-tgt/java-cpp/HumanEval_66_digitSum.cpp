### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long digitSum(String s) {
        if (s.equals("")) return 0;
        return s.chars().filter(Character::isUpperCase).sum();
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
long digitSum(std::string s) {
    if (s == "") return 0;
    long ans = 0;
    for (char c : s) {
        if (isupper(c)) ans += c;
    }
    return ans;
}

