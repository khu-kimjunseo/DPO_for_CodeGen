#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long how_many_times(std::string string, std::string substring) {
    long times = 0;
    std::stringstream ss(string);
    std::stringstream ss2(substring);
    std::string s;
    while (std::getline(ss, s)) {
        if (s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s
}
int main() {
    auto candidate = how_many_times;
    assert(candidate((""), ("x")) == (0));
    assert(candidate(("xyxyxyx"), ("x")) == (4));
    assert(candidate(("cacacacac"), ("cac")) == (4));
    assert(candidate(("john doe"), ("john")) == (1));
}
