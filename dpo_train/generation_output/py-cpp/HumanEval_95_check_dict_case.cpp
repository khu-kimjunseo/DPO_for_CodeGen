### Python version

from typing import Dict

def check_dict_case(dict: Dict[str, str]) -> bool:
    if len(dict.keys()) == 0:
        return False
    else:
        state = "start"
        for key in dict.keys():

            if isinstance(key, str) == False:
                state = "mixed"
                break
            if state == "start":
                if key.isupper():
                    state = "upper"
                elif key.islower():
                    state = "lower"
                else:
                    break
            elif (state == "upper" and not key.isupper()) or (state == "lower" and not key.islower()):
                    state = "mixed"
                    break
            else:
                continue
        return state == "upper" or state == "lower"

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
    std::stringstream ss;
    std::string key;
    std::string value;
    bool state = true;
    for (auto it = dict.begin(); it != dict.end(); it++) {
        ss << it->first << ": ";
        ss >> key;
        ss >> value;
        if (key == "") {
            ss << "null";
        } else if (key.isupper()) {
            ss << "upper";
        } else if (key.islower()) {
            ss << "lower";
        } else {
            state = false;
            break;
        }
        if (state == true) {
            if (key == "") {
                ss << "null";
            } else if (key.isupper()) {
                ss << "upper";
            } else if (key.islower()) {
                ss << "lower";
            } else {
                state = false;
                break;
            }
        }
    }
    return state;
}

bool check_dict_case(std::unordered_map<std::string,std::string> dict) {
    std::stringstream ss;
    std::string key;
    std::string value;
    bool state = true;
    for (auto it = dict.begin(); it != dict.end(); it++) {
        ss << it->first << ": ";
        ss >> key;
        ss >> value;
        if (key == "") {
            ss << "null";
        } else if (key.isupper()) {
            ss << "upper";
        } else if (key.islower()) {
            ss << "lower";
        } else {
            state = false;
            break;
        }
        if (state == true) {
            if (key == "") {
                ss << "null";
            } else if (key.isupper()) {
                ss << "upper";
            } else if (key.islower()) {
                ss << "lower";
            } else {
                state = false;
                break;
            }
        }
    }
    return state;
}

bool check_dict_case(std::unordered_set<std::string> dict) {
    std::stringstream ss;
    std::string key;
    std::string value;
    bool state = true;
    for (auto it = dict.begin(); it != dict.end(); it++) {
        ss << it->first << ": ";
        ss >> key;
        ss >> value;
        if (key == "") {
            ss << "null";
        } else if (key.isupper()) {
            ss << "upper";
        } else if (key.islower()) {
            ss << "lower";
        } else {
            state = false;
            break;
        }
        if (state == true) {
            if (key == "") {
                ss << "null";
            } else if (key.isupper()) {
                ss << "upper";
            } else if (