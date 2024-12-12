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
    auto candidate = check_dict_case;
    assert(candidate((std::map<std::string,std::string>({{"p", "pineapple"}, {"b", "banana"}}))) == (true));
    assert(candidate((std::map<std::string,std::string>({{"p", "pineapple"}, {"A", "banana"}, {"B", "banana"}}))) == (false));
    assert(candidate((std::map<std::string,std::string>({{"p", "pineapple"}, {"5", "banana"}, {"a", "apple"}}))) == (false));
    assert(candidate((std::map<std::string,std::string>({{"Name", "John"}, {"Age", "36"}, {"City", "Houston"}}))) == (false));
    assert(candidate((std::map<std::string,std::string>({{"STATE", "NC"}, {"ZIP", "12345"}}))) == (true));
    assert(candidate((std::map<std::string,std::string>({{"fruit", "Orange"}, {"taste", "Sweet"}}))) == (true));
    assert(candidate((std::map<std::string,std::string>())) == (false));
}
