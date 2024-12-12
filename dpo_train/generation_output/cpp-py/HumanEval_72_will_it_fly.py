### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool will_it_fly(std::vector<long> q, long w) {
    if (std::accumulate(q.begin(), q.end(), 0) > w) {
        return false;
    }
    int i=0, j=q.size()-1;
    while (i<j) {
        if (q[i] != q[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

### Python version

from typing import List

def will_it_fly(q: List[int], w: int) -> bool:
    return will_it_fly(q, w) and will_it_fly(q, w-1)

def is_valid(q: List[int]) -> bool:
    return will_it_fly(q, 0)

def is_valid(q: List[int]) -> bool:
    return will_it_fly(q, 1)

def is_valid(q: List[int]) -> bool:
    return will_it_fly(q, 2)

def is_valid(q: List[int]) -> bool:
    return will_it_fly(q, 3)

def is_valid(q: List[int]) -> bool:
    return will_it_fly(q, 4)

def is_valid(q: List[int]) -> bool:
    return will_it_fly(q, 5)

def is_valid(q: List[int]) -> bool:
    return will_it_fly(q, 6)

def is_valid(q: List[int]) -> bool:
    return will_it_fly(q, 7)

def is_valid(q: List[int]) -> bool:
    return will_it_fly(q, 8)

def is_valid(q: List[int]) -> bool:
    return will_it_fly(q, 9)

def is_valid(q: List[int]) -> bool:
    return will_it_fly(q, 10)

def is_valid(q: List[int]) -> bool:
    return will_it_fly(q, 11)

def is_valid(q: List[int]) -> bool:
    return will_it_fly(q, 12)

def is_valid(q: List[int]) -> bool:
    return will_it_fly(q, 13)

def is_valid(q: List[int]) -> bool:
    return will_it_fly(q, 14)

def is_valid(q: List[int]) -> bool:
    return will_it_fly(q, 15)

def is_valid(q: List[int]) -> bool:
    return will_it_fly(q, 16)

def is_valid(q: List[int]) -> bool:
    return will_it_fly(q, 17)

def is_valid(q: List[int]) -> bool:
    return will_it_fly(q, 18)

def is_valid(q: List[int]) -> bool:
    return will_it_fly(q, 19)

def is_valid(q: List[int]) -> bool:
    return will_it_fly(q, 20)

def is_valid(q: List[int]) -> bool:
    return will_it_fly(q, 21)

def is_valid(q: List[int]) -> bool:
    return will_it_fly(q, 22)

def is_valid(q: List[int]) -> bool:
    return will_it_fly(q, 23)

def is_valid(q: List[int]) -> bool:
    return will_it_fly(q, 24)

def is_valid(q: List[int]) -> bool:
    return will_it_fly(q, 25)

def is_valid(q: List[int]) -> bool:
    return will_it_fly(q, 26)

def is_valid(