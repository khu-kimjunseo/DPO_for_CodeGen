### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool is_happy(std::string s) {
    if (s.size() < 3) {
      return false;
    }

    for (int i = 0; i < s.size() - 2; i++) {
      if (s[i] == s[i+1] || s[i+1] == s[i+2] || s[i] == s[i+2]) {
        return false;
      }
    }
    return true;
}


### Python version

from typing import List

def is_happy(s: str) -> bool:
    if len(s) < 3:
      return False

    for i in range(len(s) - 2):
      
      if s[i] == s[i+1] or s[i+1] == s[i+2] or s[i] == s[i+2]:
        return False
    return True
