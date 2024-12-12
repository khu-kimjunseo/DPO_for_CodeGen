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
int main() {
    auto candidate = check_dict_case;
    assert(candidate((std::map<std::string,std::string>({{"p", "pineapple"}, {"b", "banana"}}))) == (true));
    assert(candidate((std::map<std::string,std::string>({{"p", "pineapple"}, {"A", "banana"}, {"B", "banana"}}))) == (false));
    assert(candidate((std::map<std::string,std::string>({{"p", "pineapple"}, {"5", "banana"}, {"a", "apple"}}))) == (false));
    assert(candidate((std::map<std::string,std::string>({{"Name", "John"}, {"Age", "36"}, {"City", "Houston"}}))) == (false));
    assert(candidate((std::map<std::string,std::string>({{"STATE", "NC"}, {"ZIP", "12345"}}))) == (true));
    assert(candidate((std::map<std::string,std::string>({{"fruit", "Orange"}, {"taste", "Sweet"}}))) == (true));
    assert(candidate((std::map<std::string,std::string>())) == (false));
}
