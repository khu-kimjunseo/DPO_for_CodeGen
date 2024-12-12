### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool check_if_last_char_is_a_letter(std::string txt) {
    std::string check = txt.substr(txt.find_last_of(' ') + 1);
    return (check.size() == 1 && std::isalpha(check[0]));
}

### Python version

def check_if_last_char_is_a_letter(txt: str) -> bool:
    return check_if_last_char_is_a_letter(txt.substr(txt.find_last_of(' ') + 1));

### C++ version

#include<iostream>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool check_if_last_char_is_a_letter(std::string txt) {
    std::string check = txt.substr(txt.find_last_of(' ') + 1);
    return (check.size() == 1 && std::isalpha(check[0]));
}

int main() {
    std::string txt = "abcdefghijklmnopqrstuvwxyz";
    std::cout << "txt: " << txt << std::endl;
    std::cout << "check_if_last_char_is_a_letter(txt): " << check_if_last_char_is_a_letter(txt) << std::endl;
    return 0;
}
