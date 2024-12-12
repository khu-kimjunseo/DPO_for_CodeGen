#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::tuple<long, long> even_odd_count(long num) {
    long even_count = 0;
    long odd_count = 0;
    for (auto i: std::to_string(abs(num))) {
        if (int(i)%2==0) {
            even_count +=1;
        } else {
            odd_count +=1;
        }
    }
    return std::make_tuple(even_count, odd_count);
}
int main() {
    auto candidate = even_odd_count;
    assert(candidate((7)) == (std::make_tuple(0, 1)));
    assert(candidate((-78)) == (std::make_tuple(1, 1)));
    assert(candidate((3452)) == (std::make_tuple(2, 2)));
    assert(candidate((346211)) == (std::make_tuple(3, 3)));
    assert(candidate((-345821)) == (std::make_tuple(3, 3)));
    assert(candidate((-2)) == (std::make_tuple(1, 0)));
    assert(candidate((-45347)) == (std::make_tuple(2, 3)));
    assert(candidate((0)) == (std::make_tuple(1, 0)));
}
