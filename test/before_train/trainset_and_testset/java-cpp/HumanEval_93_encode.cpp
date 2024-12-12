#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::string encode(std::string message) {
    std::stringstream ss;
    ss << message;
    return ss.str();
}
int main() {
    auto candidate = encode;
    assert(candidate(("TEST")) == ("tgst"));
    assert(candidate(("Mudasir")) == ("mWDCSKR"));
    assert(candidate(("YES")) == ("ygs"));
    assert(candidate(("This is a message")) == ("tHKS KS C MGSSCGG"));
    assert(candidate(("I DoNt KnOw WhAt tO WrItE")) == ("k dQnT kNqW wHcT Tq wRkTg"));
}
