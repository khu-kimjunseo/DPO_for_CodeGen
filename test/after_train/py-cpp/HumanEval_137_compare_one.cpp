#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
union Union_long_float_std_string{
    long f0;
    float f1;
    std::string f2;    Union_long_float_std_string(long _f0) : f0(_f0) {}
    Union_long_float_std_string(float _f1) : f1(_f1) {}
    Union_long_float_std_string(std::string _f2) : f2(_f2) {}
    ~Union_long_float_std_string() {}
    bool operator==(long f) {
        return f0 == f ;
    }    bool operator==(float f) {
        return f1 == f ;
    }    bool operator==(std::string f) {
        return f2 == f ;
    }
};
union Union_long_float_std_string_std_nullopt{
    long f0;
    float f1;
    std::string f2;
    std::nullopt f3;    Union_long_float_std_string_std_nullopt(long _f0) : f0(_f0) {}
    Union_long_float_std_string_std_nullopt(float _f1) : f1(_f1) {}
    Union_long_float_std_string_std_nullopt(std::string _f2) : f2(_f2) {}
    Union_long_float_std_string_std_nullopt(std::nullopt _f3) : f3(_f3) {}
    ~Union_long_float_std_string_std_nullopt() {}
    bool operator==(long f) {
        return f0 == f ;
    }    bool operator==(float f) {
        return f1 == f ;
    }    bool operator==(std::string f) {
        return f2 == f ;
    }    bool operator==(std::nullopt f) {
        return f3 == f ;
    }
};
Union_long_float_std_string_std_nullopt compare_one(Union_long_float_std_string a, Union_long_float_std_string b) {
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
}
int main() {
    auto candidate = compare_one;
    assert(candidate(1, 2) == 2);
    assert(candidate(1, 2.5f) == 2.5f);
    assert(candidate(2, 3) == 3);
    assert(candidate(5, 6) == 6);
    assert(candidate(1, "2,3") == "2,3");
    assert(candidate("5,1", "6") == "6");
    assert(candidate("1", "2") == "2");
    assert(candidate("1", 1) == std::nullopt);
}
