#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long digits(long n) {
    long product = 1;
    int odd_count = 0;
    for (char digit : std::to_string(n)) {
        int int_digit = digit - '0';
        if (int_digit % 2 == 1) {
            product *= int_digit;
            odd_count++;
        }
    }
    return odd_count == 0 ? 0 : product;
}
int main() {
    auto candidate = digits;
    assert(candidate((5)) == (5));
    assert(candidate((54)) == (5));
    assert(candidate((120)) == (1));
    assert(candidate((5014)) == (5));
    assert(candidate((98765)) == (315));
    assert(candidate((5576543)) == (2625));
    assert(candidate((2468)) == (0));
}
