#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long closest_integer(std::string value) {
    std::vector<std::string> v;
    std::regex r("^\\d+$");
    std::smatch m;
    std::regex_search(value, m, r);
    if (m.size() == 0) return 0;
    v.push_back(m.str());
    std::stringstream ss;
    ss << value;
    std::string s = ss.str();
    std::stringstream ss2;
    ss2 << s;
    std::string s2 = ss2.str();
    long num = Long(s2);
    long num2 = Long(s);
    if (s2.length() == 0) return num;
    if (s2.length() == 1) return num2;
    if (s2.length() == 2) return num2;
    if (s2.length() == 3) return num2;
    if (s2.length() == 4) return num2;
    if (s2.length() == 5) return num2;
    if (s2.length() == 6) return num2;
    if (s2.length() == 7) return num2;
    if (s2.length() == 8) return num2;
    if (s2.length() == 9) return num2;
    if (s2.length() == 10) return num2;
    if (s2.length() == 11) return num2;
    if (s2.length() == 12) return num2;
    if (s2.length() == 13) return num2;
    if (s2.length() == 14) return num2;
    if (s2.length() == 15) return num2;
    if (s2.length() == 16) return num2;
    if (s2.length() == 17) return num2;
    if (s2.length() == 18) return num2;
    if (s2.length() == 19) return num2;
    if (s2.length() == 20) return num2;
    if (s2.length() == 21) return num2;
    if (s2.length() == 22) return num2;
    if (s2.length() == 23) return num2;
    if (s2.length() == 24) return num2;
    if (s2.length() == 25) return num2;
    if (s2.length() == 26) return num2;
    if (s2.length() == 27) return num2;
    if (s2.length() == 28) return num2;
    if (s2.length() == 29) return num2;
    if (s2.length() == 30) return num2;
    if (s2.length() == 31) return num2;
    if (s2.length() == 32) return num2;
    if (s2.length() == 33) return num2;
    if (s2.length() == 34) return num2;
    if (s2.length() == 35) return num2;
    if (s2
}
int main() {
    auto candidate = closest_integer;
    assert(candidate(("10")) == (10));
    assert(candidate(("14.5")) == (15));
    assert(candidate(("-15.5")) == (-16));
    assert(candidate(("15.3")) == (15));
    assert(candidate(("0")) == (0));
}
