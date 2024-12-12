#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool is_nested(std::string string) {
    std::vector<int> opening_bracket_index;
    std::vector<int> closing_bracket_index;
    for (int i = 0; i < string.length(); i++) {
        if (string[i] == '[') {
            opening_bracket_index.push_back(i);
        } else {
            closing_bracket_index.push_back(i);
        }
    }
    std::reverse(closing_bracket_index.begin(), closing_bracket_index.end());
    int cnt = 0;
    int i = 0;
    int l = closing_bracket_index.size();
    for (int idx : opening_bracket_index) {
        if (i < l && idx < closing_bracket_index[i]) {
            cnt++;
            i++;
        }
    }
    return cnt >= 2;
}
