#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long is_bored(std::string S) {
    std::regex r("[.?!]\\s*");
    std::vector<std::string> sentences(std::sregex_token_iterator(S.begin(), S.end(), r, -1), std::sregex_token_iterator());
    long res = 0;
    for (auto sentence : sentences) {
        res += sentence.substr(0, 2) == "I ";
    }
    return res;
}
