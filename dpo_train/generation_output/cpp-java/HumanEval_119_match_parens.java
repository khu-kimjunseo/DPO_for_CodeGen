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
        return matchParens(lst.toString());
    }
    public static String matchParens(String s) {
        return s.replaceAll("\\(", "").replaceAll("\\)", "");
    }
    public static String matchParens(String s, String p) {
        return s.replaceAll(p, "").replaceAll("\\(", "").replaceAll("\\)", "");
    }
    public static String matchParens(String s, String p, String p2) {
        return s.replaceAll(p, "").replaceAll("\\(", "").replaceAll("\\)", "");
    }
    public static String matchParens(String s, String p, String p2, String p3) {
        return s.replaceAll(p, "").replaceAll("\\(", "").replaceAll("\\)", "");
    }
    public static String matchParens(String s, String p, String p2, String p3, String p4) {
        return s.replaceAll(p, "").replaceAll("\\(", "").replaceAll("\\)", "");
    }
    public static String matchParens(String s, String p, String p2, String p3, String p4, String p5) {
        return s.replaceAll(p, "").replaceAll("\\(", "").replaceAll("\\)", "");
    }
    public static String matchParens(String s, String p, String p2, String p3, String p4, String p5, String p6) {
        return s.replaceAll(p, "").replaceAll("\\(", "").replaceAll("\\)", "");
    }
    public static String matchParens(String s, String p, String p2, String p3, String p4, String p5, String p6, String p7) {
        return s.replaceAll(p, "").replaceAll("\\(", "").replaceAll("\\)", "");
    }
    public static String matchParens(String s, String p, String p2, String p3, String p4, String p5, String p6, String p7, String p8) {
        return s.replaceAll(p, "").replaceAll("\\(", "").replaceAll("\\)", "");
    }
    public static String matchParens(String s, String p, String p2, String p3, String p4, String p5, String p6, String p7, String p8, String p9) {
        return s.replaceAll(p, "").replaceAll("\\(", "").replaceAll("\\)", "");
    }
    public static String matchParens(String s, String p, String p2, String p3, String p4, String p5, String p6, String p7, String p8, String p9, String p10) {
        return s.replaceAll(p, "").replaceAll("\\(", "").replaceAll("\\)", "");
    }
    public static String