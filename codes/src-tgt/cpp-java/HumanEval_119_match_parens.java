### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string match_parens(std::vector<std::string> lst) {
    auto check = [](std::string s) {
        int val = 0;
        for (auto i : s) {
            if (i == '(') {
                val = val + 1;
            } else {
                val = val - 1;
            }
            if (val < 0) {
                return false;
            }
        }
        return val == 0;
    };
    auto S1 = lst[0] + lst[1];
    auto S2 = lst[1] + lst[0];
    return check(S1) || check(S2) ? "Yes" : "No";
}


### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String matchParens(ArrayList<String> lst) {
        return check(lst.get(0) + lst.get(1)) || check(lst.get(1) + lst.get(0)) ? "Yes" : "No";
    }
    public static boolean check(String s) {
        int val = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '(') {
                val++;
            } else {
                val--;
            }
            if (val < 0) {
                return false;
            }
        }
        return val == 0 ? true : false;
    }
    
    

}

