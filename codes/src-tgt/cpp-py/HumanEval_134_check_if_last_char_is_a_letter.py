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
 
    check = txt.split(' ')[-1]
    return True if len(check) == 1 and (97 <= ord(check.lower()) <= 122) else False
