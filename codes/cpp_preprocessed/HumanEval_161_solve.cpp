#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::string solve(std::string s) {
    bool flg = false;
    std::string new_str = s;
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            new_str[i] = isupper(s[i]) ? tolower(s[i]) : toupper(s[i]);
            flg = true;
        }
    }
    if (!flg) {
        std::reverse(new_str.begin(), new_str.end());
    }
    return new_str;
}
