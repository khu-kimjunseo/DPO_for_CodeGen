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
int main() {
    auto candidate = is_bored;
    assert(candidate(("Hello world")) == (0));
    assert(candidate(("Is the sky blue?")) == (0));
    assert(candidate(("I love It !")) == (1));
    assert(candidate(("bIt")) == (0));
    assert(candidate(("I feel good today. I will be productive. will kill It")) == (2));
    assert(candidate(("You and I are going for a walk")) == (0));
}
