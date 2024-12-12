#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    std::string strong = extensions[0];
    int my_val = std::count_if(strong.begin(), strong.end(), [](char c){return std::isupper(c);}) - std::count_if(strong.begin(), strong.end(), [](char c){return std::islower(c);});
    for (std::string s : extensions) {
        int val = std::count_if(s.begin(), s.end(), [](char c){return std::isupper(c);}) - std::count_if(s.begin(), s.end(), [](char c){return std::islower(c);});
        if (val > my_val) {
            strong = s;
            my_val = val;
        }
    }
    std::string ans = class_name + "." + strong;
    return ans;
}
