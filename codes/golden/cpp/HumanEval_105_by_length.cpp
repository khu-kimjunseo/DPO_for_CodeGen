#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<std::string> by_length(std::vector<long> arr) {
    std::map<long, std::string> dic = {
        {1, "One"},
        {2, "Two"},
        {3, "Three"},
        {4, "Four"},
        {5, "Five"},
        {6, "Six"},
        {7, "Seven"},
        {8, "Eight"},
        {9, "Nine"}
    };
    std::sort(arr.begin(), arr.end(), std::greater<long>());
    std::vector<std::string> new_arr;
    for (auto var: arr) {
        if (dic.count(var)) {
            new_arr.push_back(dic[var]);
        }
    }
    return new_arr;
}
int main() {
    auto candidate = by_length;
    assert(candidate((std::vector<long>({(long)2, (long)1, (long)1, (long)4, (long)5, (long)8, (long)2, (long)3}))) == (std::vector<std::string>({(std::string)"Eight", (std::string)"Five", (std::string)"Four", (std::string)"Three", (std::string)"Two", (std::string)"Two", (std::string)"One", (std::string)"One"})));
    assert(candidate((std::vector<long>())) == (std::vector<std::string>()));
    assert(candidate((std::vector<long>({(long)1, (long)-1, (long)55}))) == (std::vector<std::string>({(std::string)"One"})));
    assert(candidate((std::vector<long>({(long)1, (long)-1, (long)3, (long)2}))) == (std::vector<std::string>({(std::string)"Three", (std::string)"Two", (std::string)"One"})));
    assert(candidate((std::vector<long>({(long)9, (long)4, (long)8}))) == (std::vector<std::string>({(std::string)"Nine", (std::string)"Eight", (std::string)"Four"})));
}
