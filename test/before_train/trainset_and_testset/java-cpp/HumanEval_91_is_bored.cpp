#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long is_bored(std::string S) {
    std::vector<std::string> words = S.split("[.?!]");
    std::vector<std::string>::iterator it = words.begin();
    std::vector<std::string>::iterator end = words.end();
    long result = 0;
    for (; it != end; ++it) {
        result += is_bored(*it);
    }
    return result;
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
