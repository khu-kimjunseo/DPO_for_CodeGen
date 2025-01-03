#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::string file_name_check(std::string file_name) {
    std::stringstream ss;
    ss << file_name;
    std::string file_name_check = ss.str();
    std::string file_name_check_ext = file_name_check.substr(file_name_check.find_last_of(".") + 1);
    if (file_name_check_ext.compare(".exe") == 0) {
        return "Yes";
    } else if (file_name_check_ext.compare(".dll") == 0) {
        return "Yes";
    } else {
        return "No";
    }
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
