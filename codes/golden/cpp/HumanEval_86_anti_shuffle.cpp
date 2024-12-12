#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string anti_shuffle(std::string s) {
    std::stringstream ss(s);
    std::string word, res;
    while (ss >> word) {
        std::sort(word.begin(), word.end());
        res += word + " ";
    }
    res.pop_back();
    return res;
}
int main() {
    auto candidate = anti_shuffle;
    assert(candidate(("Hi")) == ("Hi"));
    assert(candidate(("hello")) == ("ehllo"));
    assert(candidate(("number")) == ("bemnru"));
    assert(candidate(("abcd")) == ("abcd"));
    assert(candidate(("Hello World!!!")) == ("Hello !!!Wdlor"));
    assert(candidate(("")) == (""));
    assert(candidate(("Hi. My name is Mister Robot. How are you?")) == (".Hi My aemn is Meirst .Rboot How aer ?ouy"));
}
