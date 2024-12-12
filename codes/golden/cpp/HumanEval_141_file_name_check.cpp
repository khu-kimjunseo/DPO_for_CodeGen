#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string file_name_check(std::string file_name) {
    std::vector<std::string> suf = {"txt", "exe", "dll"};
    std::vector<std::string> lst;
    std::stringstream ss(file_name);
    std::string item;
    while (std::getline(ss, item, '.')) {
        lst.push_back(item);
    }
    if (lst.size() != 2) {
        return "No";
    }
    if (std::find(suf.begin(), suf.end(), lst[1]) == suf.end()) {
        return "No";
    }
    if (lst[0].length() == 0) {
        return "No";
    }
    if (!isalpha(lst[0][0])) {
        return "No";
    }
    int t = std::count_if(lst[0].begin(), lst[0].end(), ::isdigit);
    if (t > 3) {
        return "No";
    }
    return "Yes";
}
int main() {
    auto candidate = file_name_check;
    assert(candidate(("example.txt")) == ("Yes"));
    assert(candidate(("1example.dll")) == ("No"));
    assert(candidate(("s1sdf3.asd")) == ("No"));
    assert(candidate(("K.dll")) == ("Yes"));
    assert(candidate(("MY16FILE3.exe")) == ("Yes"));
    assert(candidate(("His12FILE94.exe")) == ("No"));
    assert(candidate(("_Y.txt")) == ("No"));
    assert(candidate(("?aREYA.exe")) == ("No"));
    assert(candidate(("/this_is_valid.dll")) == ("No"));
    assert(candidate(("this_is_valid.wow")) == ("No"));
    assert(candidate(("this_is_valid.txt")) == ("Yes"));
    assert(candidate(("this_is_valid.txtexe")) == ("No"));
    assert(candidate(("#this2_i4s_5valid.ten")) == ("No"));
    assert(candidate(("@this1_is6_valid.exe")) == ("No"));
    assert(candidate(("this_is_12valid.6exe4.txt")) == ("No"));
    assert(candidate(("all.exe.txt")) == ("No"));
    assert(candidate(("I563_No.exe")) == ("Yes"));
    assert(candidate(("Is3youfault.txt")) == ("Yes"));
    assert(candidate(("no_one#knows.dll")) == ("Yes"));
    assert(candidate(("1I563_Yes3.exe")) == ("No"));
    assert(candidate(("I563_Yes3.txtt")) == ("No"));
    assert(candidate(("final..txt")) == ("No"));
    assert(candidate(("final132")) == ("No"));
    assert(candidate(("_f4indsartal132.")) == ("No"));
    assert(candidate((".txt")) == ("No"));
    assert(candidate(("s.")) == ("No"));
}
