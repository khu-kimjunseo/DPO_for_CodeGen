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