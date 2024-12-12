### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::map<std::string,long> histogram(std::string test) {
    std::map<std::string,long> dict1;
    std::stringstream ss(test);
    std::string word;
    long t = 0;
    while (ss >> word) {
        dict1[word]++;
        if (dict1[word] > t) {
            t = dict1[word];
        }
    }
    std::map<std::string,long> result;
    for (auto i : dict1) {
        if (i.second == t) {
            result[i.first] = t;
        }
    }
    return result;
}

### Python version

from typing import Dict

def histogram(test: str) -> Dict[str, int]:
    """
    >>> histogram("")
    {}
    >>> histogram("a")
    {'a': 1}
    >>> histogram("ab")
    {'a': 1, 'b': 2}
    >>> histogram("abcd")
    {'a': 1, 'b': 2, 'c': 3}
    >>> histogram("abcd")
    {'a': 1, 'b': 2, 'c': 3, 'd': 4}
    >>> histogram("abcd")
    {'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5}
    >>> histogram("abcd")
    {'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5, 'f': 6}
    >>> histogram("abcd")
    {'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5, 'f': 6, 'g': 7}
    >>> histogram("abcd")
    {'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5, 'f': 6, 'g': 7, 'h': 8}
    >>> histogram("abcd")
    {'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5, 'f': 6, 'g': 7, 'h': 8, 'i': 9}
    >>> histogram("abcd")
    {'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5, 'f': 6, 'g': 7, 'h': 8, 'i': 9, 'j': 10}
    >>> histogram("abcd")
    {'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5, 'f': 6, 'g': 7, 'h': 8, 'i': 9, 'j': 10, 'k': 11}
    >>> histogram("abcd")
    {'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5, 'f': 6, 'g': 7, 'h': 8, 'i': 9, 'j': 10, 'k': 11, 'l': 12}
    >>> histogram("abcd")
    {'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5, 'f': 6, 'g': 7, 'h': 8, 'i': 9, 'j': 10, 'k': 11, 'l': 12, 'm': 13}
    >>> histogram("abcd")
    {'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5, 'f': 6, 'g': 7, 'h': 8, 'i': 9, 'j': 10, 'k': 11, 'l': 12, 'm': 13, 'n': 14}
    >>> histogram("abcd")
    {'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5, 'f': 6, 'g': 7, 'h':