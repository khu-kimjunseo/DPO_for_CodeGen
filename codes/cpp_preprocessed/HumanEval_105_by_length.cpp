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
