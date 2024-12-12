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
