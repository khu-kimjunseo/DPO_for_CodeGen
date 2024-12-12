#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::sort(lst.begin(), lst.end());
    std::vector<std::string> new_lst;
    for (auto i:lst) {
        if (i.size()%2 == 0) {
            new_lst.push_back(i);
        }
    }
    std::sort(new_lst.begin(), new_lst.end(), [](std::string a, std::string b){return a.size() < b.size();});
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
