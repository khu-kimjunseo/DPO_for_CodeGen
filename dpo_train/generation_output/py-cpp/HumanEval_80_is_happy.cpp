### Python version

from typing import List

def is_happy(s: str) -> bool:
    if len(s) < 3:
      return False

    for i in range(len(s) - 2):
      
      if s[i] == s[i+1] or s[i+1] == s[i+2] or s[i] == s[i+2]:
        return False
    return True

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
bool is_happy(std::string s) {
  std::regex r("^[a-zA-Z0-9]*$");
  std::smatch m;
  std::regex_search(s, m, r);
  return m.size() == 1;
}

int main() {
  std::string s;
  std::cin >> s;
  std::cout << is_happy(s) << std::endl;
  return 0;
}
