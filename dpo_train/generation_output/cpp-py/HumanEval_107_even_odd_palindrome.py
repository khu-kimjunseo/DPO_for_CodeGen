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

### Python version

from typing import Tuple

def even_odd_palindrome(n: int) -> Tuple[int, int]:
    """
    >>> even_odd_palindrome(5)
    (0, 1)
    >>> even_odd_palindrome(6)
    (1, 0)
    >>> even_odd_palindrome(7)
    (0, 1)
    >>> even_odd_palindrome(8)
    (1, 0)
    >>> even_odd_palindrome(9)
    (0, 1)
    >>> even_odd_palindrome(10)
    (1, 0)
    >>> even_odd_palindrome(11)
    (0, 1)
    >>> even_odd_palindrome(12)
    (1, 0)
    >>> even_odd_palindrome(13)
    (0, 1)
    >>> even_odd_palindrome(14)
    (1, 0)
    >>> even_odd_palindrome(15)
    (0, 1)
    >>> even_odd_palindrome(16)
    (1, 0)
    >>> even_odd_palindrome(17)
    (0, 1)
    >>> even_odd_palindrome(18)
    (1, 0)
    >>> even_odd_palindrome(19)
    (0, 1)
    >>> even_odd_palindrome(20)
    (1, 0)
    >>> even_odd_palindrome(21)
    (0, 1)
    >>> even_odd_palindrome(22)
    (1, 0)
    >>> even_odd_palindrome(23)
    (0, 1)
    >>> even_odd_palindrome(24)
    (1, 0)
    >>> even_odd_palindrome(25)
    (0, 1)
    >>> even_odd_palindrome(26)
    (1, 0)
    >>> even_odd_palindrome(27)
    (0, 1)
    >>> even_odd_palindrome(28)
    (1, 0)
    >>> even_odd_palindrome(29)
    (0, 1)
    >>> even_odd_palindrome(30)
    (1, 0)
    >>> even_odd_palindrome(31)
    (0, 1)
    >>> even_odd_palindrome(32)
    (1, 0)
    >>> even_odd_palindrome(33)
    (0, 1)
    >>> even_odd_palindrome(34)
    (1, 0)
    >>> even_odd_palindrome(35)
    (0, 1)
    >>> even_odd_palindrome(36)
    (1, 0)
    >>> even_odd_palindrome(37)
    (0, 1)
    >>> even_odd_palindrome(38)
    (1, 0)
    >>> even_odd_palindrome(39)
    (0, 1)
    >>> even_odd_palindrome(40)
    