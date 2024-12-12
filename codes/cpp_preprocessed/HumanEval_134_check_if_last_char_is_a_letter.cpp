#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool check_if_last_char_is_a_letter(std::string txt) {
    std::string check = txt.substr(txt.find_last_of(' ') + 1);
    return (check.size() == 1 && std::isalpha(check[0]));
}
