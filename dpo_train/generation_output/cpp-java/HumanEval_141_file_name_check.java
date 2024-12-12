### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string file_name_check(std::string file_name) {
    std::vector<std::string> suf = {"txt", "exe", "dll"};
    std::vector<std::string> lst;
    std::stringstream ss(file_name);
    std::string item;
    while (std::getline(ss, item, '.')) {
        lst.push_back(item);
    }
    if (lst.size() != 2) {
        return "No";
    }
    if (std::find(suf.begin(), suf.end(), lst[1]) == suf.end()) {
        return "No";
    }
    if (lst[0].length() == 0) {
        return "No";
    }
    if (!isalpha(lst[0][0])) {
        return "No";
    }
    int t = std::count_if(lst[0].begin(), lst[0].end(), ::isdigit);
    if (t > 3) {
        return "No";
    }
    return "Yes";
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
    public static String fileNameCheck(String file_name) {
        if (file_name.length() == 0) {
            return "No";
        }
        if (file_name.length() == 1) {
            return "No";
        }
        if (file_name.length() == 2) {
            return "No";
        }
        if (file_name.length() == 3) {
            return "No";
        }
        if (file_name.length() == 4) {
            return "No";
        }
        if (file_name.length() == 5) {
            return "No";
        }
        if (file_name.length() == 6) {
            return "No";
        }
        if (file_name.length() == 7) {
            return "No";
        }
        if (file_name.length() == 8) {
            return "No";
        }
        if (file_name.length() == 9) {
            return "No";
        }
        if (file_name.length() == 10) {
            return "No";
        }
        if (file_name.length() == 11) {
            return "No";
        }
        if (file_name.length() == 12) {
            return "No";
        }
        if (file_name.length() == 13) {
            return "No";
        }
        if (file_name.length() == 14) {
            return "No";
        }
        if (file_name.length() == 15) {
            return "No";
        }
        if (file_name.length() == 16) {
            return "No";
        }
        if (file_name.length() == 17) {
            return "No";
        }
        if (file_name.length() == 18) {
            return "No";
        }
        if (file_name.length() == 19) {
            return "No";
        }
        if (file_name.length() == 20) {
            return "No";
        }
        if (file_name.length() == 21) {
            return "No";
        }
        if (file_name.length() == 22) {
            return "No";
        }
        if (file_name.length() == 23) {
            return "No";
        }
        if (file_name.length() == 24) {
            return "No";
        }
        if (file_name.length() == 25) {
            return "No";
        }
        if (file_name.length() == 26) {
            return "