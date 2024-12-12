#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string remove_vowels(std::string text) {
    std::string res;
    for (char c : text) {
        if (std::string("aeiouAEIOU").find(c) == std::string::npos) {
            res += c;
        }
    }
    return res;
}
