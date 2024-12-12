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
std::string file_name_check(std::string file_name) {
    std::stringstream ss;
    ss << file_name;
    std::string file_name_check = ss.str();
    std::string file_name_check_ext = file_name_check.substr(file_name_check.find_last_of(".") + 1);
    if (file_name_check_ext.compare(".exe") == 0) {
        return "Yes";
    } else if (file_name_check_ext.compare(".dll") == 0) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    std::string file_name = "";
    std::string file_name_check = "";
    std::string file_name_check_ext = "";
    std::string file_name_check_ext_ext = "";
    std::string file_name_check_ext_ext_ext = "";
    std::string file_name_check_ext_ext_ext_ext = "";
    std::string file_name_check_ext_ext_ext_ext_ext = "";
    std::string file_name_check_ext_ext_ext_ext_ext_ext = "";
    std::string file_name_check_ext_ext_ext_ext_ext_ext_ext = "";
    std::string file_name_check_ext_ext_ext_ext_ext_ext_ext_ext = "";
    std::string file_name_check_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext = "";
    std::string file_name_check_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_ext_