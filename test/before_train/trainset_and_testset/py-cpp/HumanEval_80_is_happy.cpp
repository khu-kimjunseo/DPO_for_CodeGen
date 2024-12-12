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
    auto candidate = is_happy;
    assert(candidate(("a")) == (false));
    assert(candidate(("aa")) == (false));
    assert(candidate(("abcd")) == (true));
    assert(candidate(("aabb")) == (false));
    assert(candidate(("adb")) == (true));
    assert(candidate(("xyy")) == (false));
    assert(candidate(("iopaxpoi")) == (true));
    assert(candidate(("iopaxioi")) == (false));
}
