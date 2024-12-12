### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> parse_nested_parens(std::string paren_string) {
    std::vector<long> res;
    std::stringstream ss(paren_string);
    std::string s;
    while (ss >> s) {
        long depth = 0, max_depth = 0;
        for (char c : s) {
            if (c == '(') {
                depth++;
                max_depth = std::max(depth, max_depth);
            } else {
                depth--;
            }
        }
        res.push_back(max_depth);
    }
    return res;
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
    public static ArrayList<Long> parseNestedParens(String paren_string) {
        ArrayList<Long> res = new ArrayList<>();
        String[] parens = paren_string.split("\\(");
        for (String p : parens) {
            long depth = 0, max_depth = 0;
            String[] parens = p.split("\\)");
            for (String p1 : parens) {
                if (p1.equals("(")) {
                    depth++;
                } else if (p1.equals(")")) {
                    depth--;
                } else if (p1.equals("(")) {
                    max_depth = std::max(depth, max_depth);
                } else if (p1.equals(")")) {
                    max_depth = std::max(depth, max_depth);
                }
            }
            res.add(max_depth);
        }
        return res;
    }
}

class Solution {
    public static void main(String[] args) {
        long[] parens = new long[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        System.out.println(Problem.parseNestedParens(String.join(" ", parens)));
    }
}
