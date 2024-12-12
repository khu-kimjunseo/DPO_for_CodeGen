#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string flip_case(std::string string) {
    for (auto& c : string) {
        if (isupper(c)) {
            c = tolower(c);
        } else {
            c = toupper(c);
        }
    }
    return string;
}
int main() {
    auto candidate = flip_case;
    assert(candidate(("")) == (""));
    assert(candidate(("Hello!")) == ("hELLO!"));
    assert(candidate(("These violent delights have violent ends")) == ("tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS"));
}
