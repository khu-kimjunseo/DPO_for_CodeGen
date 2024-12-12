#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::tuple<long, long> even_odd_palindrome(long n) {
    auto is_palindrome = [](long n) -> bool {
        std::string s = std::to_string(n);
        return std::equal(s.begin(), s.end(), s.rbegin());
    };
    long even_palindrome_count = 0;
    long odd_palindrome_count = 0;
    for(long i=1; i<=n; i++) {
        if(i%2 == 1 && is_palindrome(i)) {
            odd_palindrome_count++;
        } else if(i%2 == 0 && is_palindrome(i)) {
            even_palindrome_count++;
        }
    }
    return std::make_tuple(even_palindrome_count, odd_palindrome_count);
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
