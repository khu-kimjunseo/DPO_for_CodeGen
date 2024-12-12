#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string encode(std::string message) {
    std::string vowels = "aeiouAEIOU";
    std::map<char, char> vowels_replace;
    for (char i : vowels) {
        vowels_replace[i] = i + 2;
    }
    std::transform(message.begin(), message.end(), message.begin(), [](char c) {
        return std::isupper(c) ? std::tolower(c) : std::toupper(c);
    });
    std::string result = "";
    for (char i : message) {
        if (vowels_replace.count(i)) {
            result += vowels_replace[i];
        } else {
            result += i;
        }
    }
    return result;
}
int main() {
    auto candidate = encode;
    assert(candidate(("TEST")) == ("tgst"));
    assert(candidate(("Mudasir")) == ("mWDCSKR"));
    assert(candidate(("YES")) == ("ygs"));
    assert(candidate(("This is a message")) == ("tHKS KS C MGSSCGG"));
    assert(candidate(("I DoNt KnOw WhAt tO WrItE")) == ("k dQnT kNqW wHcT Tq wRkTg"));
}
