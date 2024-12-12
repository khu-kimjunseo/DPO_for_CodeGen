### Python version

def file_name_check(file_name: str) -> str:
    suf = ['txt', 'exe', 'dll']
    lst = file_name.split(sep='.')
    if len(lst) != 2:
        return 'No'
    if not lst[1] in suf:
        return 'No'
    if len(lst[0]) == 0:
        return 'No'
    if not lst[0][0].isalpha():
        return 'No'
    t = len([x for x in lst[0] if x.isdigit()])
    if t > 3:
        return 'No'
    return 'Yes'

### C++ version

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

