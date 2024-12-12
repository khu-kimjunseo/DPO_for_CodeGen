#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<std::string> all_prefixes(std::string string) {
    std::vector<std::string> result;
    for(int i=0;i<string.length();i++) {
        result.push_back(string.substr(0,i+1));
    }
    return result;
}
