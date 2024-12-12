#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::vector<std::string> new_lst;
    std::stringstream ss;
    for (auto i = 0; i < lst.size(); i++) {
        ss << lst[i];
        new_lst.push_back(ss.str());
    }
    return new_lst;
}
int main() {
    auto candidate = sorted_list_sum;
    assert(candidate((std::vector<std::string>({(std::string)"aa", (std::string)"a", (std::string)"aaa"}))) == (std::vector<std::string>({(std::string)"aa"})));
    assert(candidate((std::vector<std::string>({(std::string)"school", (std::string)"AI", (std::string)"asdf", (std::string)"b"}))) == (std::vector<std::string>({(std::string)"AI", (std::string)"asdf", (std::string)"school"})));
    assert(candidate((std::vector<std::string>({(std::string)"d", (std::string)"b", (std::string)"c", (std::string)"a"}))) == (std::vector<std::string>()));
    assert(candidate((std::vector<std::string>({(std::string)"d", (std::string)"dcba", (std::string)"abcd", (std::string)"a"}))) == (std::vector<std::string>({(std::string)"abcd", (std::string)"dcba"})));
    assert(candidate((std::vector<std::string>({(std::string)"AI", (std::string)"ai", (std::string)"au"}))) == (std::vector<std::string>({(std::string)"AI", (std::string)"ai", (std::string)"au"})));
    assert(candidate((std::vector<std::string>({(std::string)"a", (std::string)"b", (std::string)"b", (std::string)"c", (std::string)"c", (std::string)"a"}))) == (std::vector<std::string>()));
    assert(candidate((std::vector<std::string>({(std::string)"aaaa", (std::string)"bbbb", (std::string)"dd", (std::string)"cc"}))) == (std::vector<std::string>({(std::string)"cc", (std::string)"dd", (std::string)"aaaa", (std::string)"bbbb"})));
}
