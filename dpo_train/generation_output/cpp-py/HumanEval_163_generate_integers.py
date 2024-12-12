### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> generate_integers(long a, long b) {
    long lower = std::max(2l, std::min(a, b));
    long upper = std::min(8l, std::max(a, b));
    std::vector<long> res;
    for (long i = lower; i <= upper; i++) {
        if (i % 2 == 0) {
            res.push_back(i);
        }
    }
    return res;
}

### Python version

from typing import List

def generate_integers(a: int, b: int) -> List[int]:
    return [a, b]

def generate_integers_from_list(a: List[int], b: List[int]) -> List[int]:
    return [a, b]

def generate_integers_from_map(a: Map[int, int], b: Map[int, int]) -> Map[int, int]:
    return {a: b}

def generate_integers_from_set(a: Set[int], b: Set[int]) -> Set[int]:
    return {a: b}

def generate_integers_from_string(a: str, b: str) -> str:
    return a + b

def generate_integers_from_regex(a: str, b: str) -> str:
    return a + b

def generate_integers_from_regex_from_list(a: List[str], b: List[str]) -> List[str]:
    return [a, b]

def generate_integers_from_regex_from_map(a: Map[str, str], b: Map[str, str]) -> Map[str, str]:
    return {a: b}

def generate_integers_from_regex_from_set(a: Set[str], b: Set[str]) -> Set[str]:
    return {a: b}

def generate_integers_from_regex_from_string(a: str, b: str) -> str:
    return a + b

### C++ version

#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<sstream>
#include<regex>
#include<bits/stdc++.h>
#include<stdint.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<algorithm>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include<iterator>
#include