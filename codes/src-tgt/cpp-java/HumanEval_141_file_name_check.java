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
        String[] suf = {"txt", "exe", "dll"};
        String[] lst = file_name.split("\\.");
        if (lst.length != 2) {
            return "No";
        }
        if (!Arrays.asList(suf).contains(lst[1])) {
            return "No";
        }
        if (lst[0].length() == 0 || !Character.isLetter(lst[0].charAt(0))) {
            return "No";
        }
        int t = lst[0].replaceAll("\\D", "").length();
        if (t > 3) {
            return "No";
        }
        return "Yes";
    }
    

}

