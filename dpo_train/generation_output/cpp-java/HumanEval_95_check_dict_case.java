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
}

class Solution {
    public static void main(String[] args) {
        HashMap<String,String> dict = new HashMap<>();
        dict.put("a", "A");
        dict.put("b", "B");
        dict.put("c", "C");
        dict.put("d", "D");
        dict.put("e", "E");
        dict.put("f", "F");
        dict.put("g", "G");
        dict.put("h", "H");
        dict.put("i", "I");
        dict.put("j", "J");
        dict.put("k", "K");
        dict.put("l", "L");
        dict.put("m", "M");
        dict.put("n", "N");
        dict.put("o", "O");
        dict.put("p", "P");
        dict.put("q", "Q");
        dict.put("r", "R");
        dict.put("s", "S");
        dict.put("t", "T");
        dict.put("u", "U");
        dict.put("v", "V");
        dict.put("w", "W");
        dict.put("x", "X");
        dict.put("y", "Y");
        dict.put("z", "Z");
