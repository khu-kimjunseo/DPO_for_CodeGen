#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
union Union_std_string_long{
    std::string f0;
    long f1;    Union_std_string_long(std::string _f0) : f0(_f0) {}
    Union_std_string_long(long _f1) : f1(_f1) {}
    ~Union_std_string_long() {}
    bool operator==(std::string f) {
        return f0 == f ;
    }    bool operator==(long f) {
        return f1 == f ;
    }
};
Union_std_string_long rounded_avg(long n, long m) {
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
}
int main() {
    auto candidate = rounded_avg;
    assert(candidate((1), (5)) == "0b11");
    assert(candidate((7), (13)) == "0b1010");
    assert(candidate((964), (977)) == "0b1111001010");
    assert(candidate((996), (997)) == "0b1111100100");
    assert(candidate((560), (851)) == "0b1011000010");
    assert(candidate((185), (546)) == "0b101101110");
    assert(candidate((362), (496)) == "0b110101101");
    assert(candidate((350), (902)) == "0b1001110010");
    assert(candidate((197), (233)) == "0b11010111");
    assert(candidate((7), (5)) == -1);
    assert(candidate((5), (1)) == -1);
    assert(candidate((5), (5)) == "0b101");
}
