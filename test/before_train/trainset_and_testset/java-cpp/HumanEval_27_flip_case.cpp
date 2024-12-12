#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::string flip_case(std::string string) {
    std::string result = string;
    std::regex r("[A-Z]");
    std::smatch m;
    std::regex_search(result, m, r);
    std::string result2 = result;
    result2.replace(m.position(1), m.length(), m.position(1) + m.length() - m.position(1));
    return result2;
}
int main() {
    auto candidate = flip_case;
    assert(candidate(("")) == (""));
    assert(candidate(("Hello!")) == ("hELLO!"));
    assert(candidate(("These violent delights have violent ends")) == ("tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS"));
}
