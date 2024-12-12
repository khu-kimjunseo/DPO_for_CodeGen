#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::tuple<long, long> even_odd_palindrome(long n) {
    long odd_palindrome_count = 0, even_palindrome_count = 0;
    for (long i = 1; i <= n; i++) {
        if (i%2 == 1) {
            odd_palindrome_count += 1;
        } else {
            even_palindrome_count += 1;
        }
    }
    return std::make_tuple(odd_palindrome_count, even_palindrome_count);
}
int main() {
    auto candidate = even_odd_palindrome;
    assert(candidate((123)) == (std::make_tuple(8, 13)));
    assert(candidate((12)) == (std::make_tuple(4, 6)));
    assert(candidate((3)) == (std::make_tuple(1, 2)));
    assert(candidate((63)) == (std::make_tuple(6, 8)));
    assert(candidate((25)) == (std::make_tuple(5, 6)));
    assert(candidate((19)) == (std::make_tuple(4, 6)));
    assert(candidate((9)) == (std::make_tuple(4, 5)));
    assert(candidate((1)) == (std::make_tuple(0, 1)));
}
