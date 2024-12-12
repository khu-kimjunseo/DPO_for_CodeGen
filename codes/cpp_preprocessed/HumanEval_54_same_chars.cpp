#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool same_chars(std::string s0, std::string s1) {
    return std::set<char>(s0.begin(), s0.end()) == std::set<char>(s1.begin(), s1.end());
}
