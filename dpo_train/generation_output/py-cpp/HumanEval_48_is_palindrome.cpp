### Python version

def is_palindrome(text: str) -> bool:
    for i in range(len(text)):
        if text[i] != text[len(text) - 1 - i]:
            return False
    return True

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
bool is_palindrome(std::string text) {
    std::stringstream ss(text);
    std::string s;
    std::getline(ss, s, '*');
    std::regex r("^[a-zA-Z0-9]*$");
    std::smatch m;
    if (std::regex_search(s, m, r)) {
        return m[0].matched;
    }
    return false;
}

int main() {
    std::string text = "Hello World!";
    std::stringstream ss(text);
    std::string s;
    std::getline(ss, s, '*');
    std::regex r("^[a-zA-Z0-9]*$");
    std::smatch m;
    if (std::regex_search(s, m, r)) {
        return m[0].matched;
    }
    return 0;
}
