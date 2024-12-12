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
    if len(text) == 0:
        return True
    if len(text) == 1:
        return False
    if text[0] == text[-1]:
        return False
    for i in range(1, len(text)):
        if text[i] != text[-1 - i]:
            return False
    return True

### C++ version

#define MAX_LEN 100

class Solution {
    public:
        bool isPalindrome(string text) {
            if (text.size() == 0) {
                return true;
            }
            if (text.size() == 1) {
                return false;
            }
            if (text[0] == text[text.size() - 1]) {
                return false;
            }
            for (int i = 0; i < text.size(); i++) {
                if (text[i] != text[text.size() - 1 - i]) {
                    return false;
                }
            }
            return true;
        }
};

int main() {
    Solution sol;
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert(sol.isPalindrome("abc"));
    assert