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
