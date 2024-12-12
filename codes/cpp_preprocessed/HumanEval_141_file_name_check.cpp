#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string file_name_check(std::string file_name) {
    std::vector<std::string> suf = {"txt", "exe", "dll"};
    std::vector<std::string> lst;
    std::stringstream ss(file_name);
    std::string item;
    while (std::getline(ss, item, '.')) {
        lst.push_back(item);
    }
    if (lst.size() != 2) {
        return "No";
    }
    if (std::find(suf.begin(), suf.end(), lst[1]) == suf.end()) {
        return "No";
    }
    if (lst[0].length() == 0) {
        return "No";
    }
    if (!isalpha(lst[0][0])) {
        return "No";
    }
    int t = std::count_if(lst[0].begin(), lst[0].end(), ::isdigit);
    if (t > 3) {
        return "No";
    }
    return "Yes";
}
