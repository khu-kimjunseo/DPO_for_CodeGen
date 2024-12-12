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
