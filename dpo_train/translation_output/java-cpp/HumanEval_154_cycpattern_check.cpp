#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
bool cycpattern_check(std::string a, std::string b) {
    std::string pat = b + b;
    std::string::iterator it = a.begin();
    std::string::iterator it2 = b.begin();
    std::string::iterator it3 = a.end();
    std::string::iterator it4 = b.end();
    std::string::iterator it5 = a.begin();
    std::string::iterator it6 = b.begin();
    std::string::iterator it7 = a.end();
    std::string::iterator it8 = b.end();
    std::string::iterator it9 = a.begin();
    std::string::iterator it10 = b.begin();
    std::string::iterator it11 = a.end();
    std::string::iterator it12 = b.end();
    std::string::iterator it13 = a.begin();
    std::string::iterator it14 = b.begin();
    std::string::iterator it15 = a.end();
    std::string::iterator it16 = b.end();
    std::string::iterator it17 = a.begin();
    std::string::iterator it18 = b.begin();
    std::string::iterator it19 = a.end();
    std::string::iterator it20 = b.end();
    std::string::iterator it21 = a.begin();
    std::string::iterator it22 = b.begin();
    std::string::iterator it23 = a.end();
    std::string::iterator it24 = b.end();
    std::string::iterator it25 = a.begin();
    std::string::iterator it26 = b.begin();
    std::string::iterator it27 = a.end();
    std::string::iterator it28 = b.end();
    std::string::iterator it29 = a.begin();
    std::string::iterator it30 = b.begin();
    std::string::iterator it31 = a.end();
    std::string::iterator it32 = b.end();
    std::string::iterator it33 = a.begin();
    std::string::iterator it34 = b.begin();
    std::string::iterator it35 = a.end();
    std::string::iterator it36 = b.end();
    std::string::iterator it37 = a.begin();
    std::string::iterator it38 = b.begin();
    std::string::iterator it39 = a.end();
    std::string::iterator it40 = b.end();
    std::string::iterator it41 = a.begin();
    std::string::iterator it42 = b.begin();
    std::string::iterator it43 = a.end();
    std::string::iterator it44 = b.end();
    std::string::iterator it45 = a.begin();
    std::string::iterator it46 = b.begin();
    std::string::iterator it47 = a.end();
    std::string::iterator it48 = b.end();
    std::string::iterator it49 = a.begin();
    std::string::iterator it50 = b.begin();
    std::string::iterator it51 = a.end();
    std::string::iterator it52 = b.end();
}
int main() {
    auto candidate = cycpattern_check;
    assert(candidate(("xyzw"), ("xyw")) == (false));
    assert(candidate(("yello"), ("ell")) == (true));
    assert(candidate(("whattup"), ("ptut")) == (false));
    assert(candidate(("efef"), ("fee")) == (true));
    assert(candidate(("abab"), ("aabb")) == (false));
    assert(candidate(("winemtt"), ("tinem")) == (true));
}
