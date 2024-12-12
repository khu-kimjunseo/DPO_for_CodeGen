### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
  std::vector<std::string> result;
  for (auto x : strings) {
    if (x.find(substring) != std::string::npos) {
      result.push_back(x);
    }
  }
  return result;
}


### Python version

from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [x for x in strings if substring in x]