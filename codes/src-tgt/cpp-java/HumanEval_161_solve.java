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
std::string solve(std::string s) {
    bool flg = false;
    std::string new_str = s;
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            new_str[i] = isupper(s[i]) ? tolower(s[i]) : toupper(s[i]);
            flg = true;
        }
    }
    if (!flg) {
        std::reverse(new_str.begin(), new_str.end());
    }
    return new_str;
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
    public static String solve(String s) {
        int flg = 0;
        int idx = 0;
        char[] newStr = s.toCharArray();
        for (char c : s.toCharArray()) {
            if (Character.isLetter(c)) {
                newStr[idx] = Character.isUpperCase(c) ? Character.toLowerCase(c) : Character.toUpperCase(c);
                flg = 1;
            }
            idx++;
        }
        if (flg == 0) {
            return new StringBuilder(s).reverse().toString();
        }
        return new String(newStr);
    }
    

}

