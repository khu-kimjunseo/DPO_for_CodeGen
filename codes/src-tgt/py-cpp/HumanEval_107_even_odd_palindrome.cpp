### Python version

from typing import Tuple

def even_odd_palindrome(n: int) -> Tuple[int, int]:
    def is_palindrome(n):
        return str(n) == str(n)[::-1]

    even_palindrome_count = 0
    odd_palindrome_count = 0

    for i in range(1, n+1):
        if i%2 == 1 and is_palindrome(i):
                odd_palindrome_count += 1
        elif i%2 == 0 and is_palindrome(i):
            even_palindrome_count += 1
    return (even_palindrome_count, odd_palindrome_count)

### C++ version

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



