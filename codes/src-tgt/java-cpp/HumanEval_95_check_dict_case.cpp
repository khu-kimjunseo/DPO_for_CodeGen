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
    if (dict.empty()) {
        return false;
    }
    std::string state = "start";
    for (auto const& [key, val] : dict) {
        if (!std::all_of(key.begin(), key.end(), ::isalpha)) {
            state = "mixed";
            break;
        }
        if (state == "start") {
            if (std::all_of(key.begin(), key.end(), ::isupper)) {
                state = "upper";
            } else if (std::all_of(key.begin(), key.end(), ::islower)) {
                state = "lower";
            } else {
                break;
            }
        } else if ((state == "upper" && !std::all_of(key.begin(), key.end(), ::isupper)) || (state == "lower" && !std::all_of(key.begin(), key.end(), ::islower))) {
            state = "mixed";
            break;
        }
    }
    return state == "upper" || state == "lower";
}

