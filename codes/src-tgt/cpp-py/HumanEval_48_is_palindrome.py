### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool is_palindrome(std::string text) {
    for (int i = 0; i < text.size(); i++) {
        if (text[i] != text[text.size() - 1 - i]) {
            return false;
        }
    }
    return true;
}


### Python version

def is_palindrome(text: str) -> bool:
    for i in range(len(text)):
        if text[i] != text[len(text) - 1 - i]:
            return False
    return True
