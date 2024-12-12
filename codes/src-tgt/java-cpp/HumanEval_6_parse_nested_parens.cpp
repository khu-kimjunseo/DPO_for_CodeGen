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
        ArrayList<Long> result = new ArrayList<Long>();

        for (String s : paren_string.split(" ")) {
            long depth = 0;
            long max_depth = 0;

            for (int i = 0; i < s.length(); i++) {
                char c = s.charAt(i);
                if (c == '(') {
                    depth += 1;
                    max_depth = Math.max(depth, max_depth);
                } else {
                    depth -= 1;
                }
            }

            result.add(max_depth);
        }

        return result;
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

