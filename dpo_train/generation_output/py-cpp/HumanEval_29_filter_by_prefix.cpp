### Python version

from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [x for x in strings if x.startswith(prefix)]

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> result;
    std::regex regex(prefix);
    std::smatch matches;
    std::regex_search(strings[0], matches, regex);
    if (matches.size() == 0) {
        return result;
    }
    std::stringstream ss;
    ss << strings[0];
    for (int i = 1; i < strings.size(); i++) {
        ss << " " << strings[i];
    }
    std::string str = ss.str();
    std::regex_replace(str, regex, result);
    return result;
}

#include<iostream>
#include<fstream>
#include<string>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_map>
#include<unordered_set>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_map>
#include<unordered_set>
#include<fstream>
#include<string>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_map>
#include<unordered_set>
#include<fstream>
#include<string>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_map>
#include<unordered_set>
#include<fstream>
#include<string>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_map>
#include<unordered_set>
#include<fstream>
#include<string>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_map>
#include<unordered_set>
#include<fstream>
#include<string>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_map>
#include<unordered_set>
#include<fstream>
#include<string>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_map>
#include<unordered_set>
#include<fstream>
#include<string>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_map>
#include<unordered_set>
#include<fstream>
#include<string>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_map>
#include<unordered_set>
#include<fstream>
#include<string>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_map>
#include<unordered_set>
#include<fstream>
#include<string>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_map>
#include<unordered_set>
#include<fstream>
#include<string>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_map>
#