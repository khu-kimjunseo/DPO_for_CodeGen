#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::string intersection(std::tuple<long, long> interval1, std::tuple<long, long> interval2) {
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
}
int main() {
    auto candidate = intersection;
    assert(candidate((std::make_tuple(1, 2)), (std::make_tuple(2, 3))) == ("NO"));
    assert(candidate((std::make_tuple(-1, 1)), (std::make_tuple(0, 4))) == ("NO"));
    assert(candidate((std::make_tuple(-3, -1)), (std::make_tuple(-5, 5))) == ("YES"));
    assert(candidate((std::make_tuple(-2, 2)), (std::make_tuple(-4, 0))) == ("YES"));
    assert(candidate((std::make_tuple(-11, 2)), (std::make_tuple(-1, -1))) == ("NO"));
    assert(candidate((std::make_tuple(1, 2)), (std::make_tuple(3, 5))) == ("NO"));
    assert(candidate((std::make_tuple(1, 2)), (std::make_tuple(1, 2))) == ("NO"));
    assert(candidate((std::make_tuple(-2, -2)), (std::make_tuple(-3, -2))) == ("NO"));
}
