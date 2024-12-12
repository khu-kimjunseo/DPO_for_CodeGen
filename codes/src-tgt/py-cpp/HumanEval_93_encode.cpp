### Python version

def encode(message: str) -> str:
    vowels = "aeiouAEIOU"
    vowels_replace = dict([(i, chr(ord(i) + 2)) for i in vowels])
    message = message.swapcase()
    return ''.join([vowels_replace[i] if i in vowels else i for i in message])

### C++ version

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
