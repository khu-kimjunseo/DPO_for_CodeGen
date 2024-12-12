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
#include<unordered_map>
#include<unordered_set>
std::string file_name_check(std::string file_name) {
    std::stringstream ss;
    ss << file_name;
    std::string file_name_str = ss.str();
    std::string file_name_str_2 = file_name_str.substr(0, file_name_str.find('.'));
    std::string file_name_str_3 = file_name_str.substr(file_name_str.find('.') + 1);
    std::string file_name_str_4 = file_name_str.substr(file_name_str.find('.') + 1);
    std::string file_name_str_5 = file_name_str.substr(file_name_str.find('.') + 1);
    std::string file_name_str_6 = file_name_str.substr(file_name_str.find('.') + 1);
    std::string file_name_str_7 = file_name_str.substr(file_name_str.find('.') + 1);
    std::string file_name_str_8 = file_name_str.substr(file_name_str.find('.') + 1);
    std::string file_name_str_9 = file_name_str.substr(file_name_str.find('.') + 1);
    std::string file_name_str_10 = file_name_str.substr(file_name_str.find('.') + 1);
    std::string file_name_str_11 = file_name_str.substr(file_name_str.find('.') + 1);
    std::string file_name_str_12 = file_name_str.substr(file_name_str.find('.') + 1);
    std::string file_name_str_13 = file_name_str.substr(file_name_str.find('.') + 1);
    std::string file_name_str_14 = file_name_str.substr(file_name_str.find('.') + 1);
    std::string file_name_str_15 = file_name_str.substr(file_name_str.find('.') + 1);
    std::string file_name_str_16 = file_name_str.substr(file_name_str.find('.') + 1);
    std::string file_name_str_17 = file_name_str.substr(file_name_str.find('.') + 1);
    std::string file_name_str_18 = file_name_str.substr(file_name_str.find('.') + 1);
    std::string file_name_str_19 = file_name_str.substr(file_name_str.find('.') + 1);
    std::string file_name_str_20 = file_name_str.substr(file_name_str.find('.') + 1);
    std::string file_name_str_21 = file_name_str.substr(file_name_str.find('.') + 1);
    std::string file_name_str_22 = file_name_str.substr(file_name_str.find('.'