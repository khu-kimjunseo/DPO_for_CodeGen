### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean checkDictCase(HashMap<String,String> dict) {
        if (dict.keySet().size() == 0) {
            return false;
        } else {
            String state = "start";
            for (String key : dict.keySet()) {
                if (!(key instanceof String)) {
                    state = "mixed";
                    break;
                }
                if (state == "start") {
                    if (key.matches("^[A-Z]+$")) {
                        state = "upper";
                    } else if (key.matches("^[a-z]+$")) {
                        state = "lower";
                    } else {
                        break;
                    }
                } else if ((state == "upper" && !key.matches("^[A-Z]+$")) || (state == "lower" && !key.matches("^[a-z]+$"))) {
                    state = "mixed";
                    break;
                } else {
                    break;
                }
            }
            return state == "upper" || state == "lower";
        }
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
bool check_dict_case(std::map<std::string,std::string> dict) {
    std::string state = "start";
    for (std::map<std::string,std::string>::iterator it = dict.begin(); it != dict.end(); ++it) {
        if (!(it->first.matches("^[A-Z]+$")) && !(it->first.matches("^[a-z]+$")) && !(it->first.matches("^[A-Z]+$"))) {
            state = "mixed";
            break;
        } else if (state == "start") {
            if (it->first.matches("^[A-Z]+$")) {
                state = "upper";
            } else if (it->first.matches("^[a-z]+$")) {
                state = "lower";
            } else {
                break;
            }
        } else if ((state == "upper" && !it->first.matches("^[A-Z]+$")) || (state == "lower" && !it->first.matches("^[a-z]+$"))) {
            state = "mixed";
            break;
        } else {
            break;
        }
    }
    return state == "upper" || state == "lower";
}

int main() {
    std::map<std::string,std::string> dict;
    std::string state = "start";
    for (int i = 0; i < 10; i++) {
        std::string key = "key" + std::to_string(i);
        std::string value = "value" + std::to_string(i);
        dict[key] = value;
    }
    std::stringstream ss;
    ss << "{";
    for (std::map<std::string,std::string>::iterator it = dict.begin(); it != dict.end(); ++it) {
        ss << it->first << ":" << it->second << ",";
    }
    ss << "}";
    std::string result = ss.str();
    std::vector<std::string> v;
    v.push_back("key1");
    v.push_back("key2");
    v.push_back("key3");
    v.push_back("key4");
    v.push_back("key5");
    v.push_back("key6");
    v.push_back("key7");
    v.push_back("key8");
    v.push_back("key9");
    v.push