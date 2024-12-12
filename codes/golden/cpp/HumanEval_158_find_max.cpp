#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string find_max(std::vector<std::string> words) {
    std::sort(words.begin(), words.end(), [](std::string a, std::string b) {
        return std::make_pair(-std::set<char>(a.begin(), a.end()).size(), a) < std::make_pair(-std::set<char>(b.begin(), b.end()).size(), b);
    });
    return words[0];
}
int main() {
    auto candidate = find_max;
    assert(candidate((std::vector<std::string>({(std::string)"name", (std::string)"of", (std::string)"string"}))) == ("string"));
    assert(candidate((std::vector<std::string>({(std::string)"name", (std::string)"enam", (std::string)"game"}))) == ("enam"));
    assert(candidate((std::vector<std::string>({(std::string)"aaaaaaa", (std::string)"bb", (std::string)"cc"}))) == ("aaaaaaa"));
    assert(candidate((std::vector<std::string>({(std::string)"abc", (std::string)"cba"}))) == ("abc"));
    assert(candidate((std::vector<std::string>({(std::string)"play", (std::string)"this", (std::string)"game", (std::string)"of", (std::string)"footbott"}))) == ("footbott"));
    assert(candidate((std::vector<std::string>({(std::string)"we", (std::string)"are", (std::string)"gonna", (std::string)"rock"}))) == ("gonna"));
    assert(candidate((std::vector<std::string>({(std::string)"we", (std::string)"are", (std::string)"a", (std::string)"mad", (std::string)"nation"}))) == ("nation"));
    assert(candidate((std::vector<std::string>({(std::string)"this", (std::string)"is", (std::string)"a", (std::string)"prrk"}))) == ("this"));
    assert(candidate((std::vector<std::string>({(std::string)"b"}))) == ("b"));
    assert(candidate((std::vector<std::string>({(std::string)"play", (std::string)"play", (std::string)"play"}))) == ("play"));
}
