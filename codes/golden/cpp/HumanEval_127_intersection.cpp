#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string intersection(std::tuple<long, long> interval1, std::tuple<long, long> interval2) {
    auto is_prime = [](long num) {
        if (num == 1 || num == 0) {
            return false;
        }
        if (num == 2) {
            return true;
        }
        for (long i = 2; i < num; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    };
    long l = std::max(std::get<0>(interval1), std::get<0>(interval2));
    long r = std::min(std::get<1>(interval1), std::get<1>(interval2));
    long length = r - l;
    if (length > 0 && is_prime(length)) {
        return "YES";
    }
    return "NO";
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
