### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> get_odd_collatz(long n) {
    std::vector<long> odd_collatz;
    if (n%2==0) {
        odd_collatz = {}; 
    } else {
        odd_collatz = {n};
    }
    while (n > 1) {
        if (n % 2 == 0) {
            n = n/2;
        } else {
            n = n*3 + 1;
        }
        if (n%2 == 1) {
            odd_collatz.push_back(n);
        }
    }
    std::sort(odd_collatz.begin(), odd_collatz.end());
    return odd_collatz;
}

### Python version

from typing import List

def get_odd_collatz(n: int) -> List[int]:
    odd_collatz = get_odd_collatz(n)
    odd_collatz.sort()
    return odd_collatz

def get_odd_collatz_list(n: int) -> List[int]:
    odd_collatz = get_odd_collatz(n)
    odd_collatz.sort()
    return odd_collatz

def get_odd_collatz_map(n: int) -> Map[int, List[int]]:
    odd_collatz = get_odd_collatz(n)
    odd_collatz.sort()
    return odd_collatz

def get_odd_collatz_set(n: int) -> Set[int]:
    odd_collatz = get_odd_collatz(n)
    odd_collatz.sort()
    return odd_collatz

def get_odd_collatz_set_list(n: int) -> Set[int]:
    odd_collatz = get_odd_collatz(n)
    odd_collatz.sort()
    return odd_collatz

def get_odd_collatz_map_set(n: int) -> Map[int, Set[int]]:
    odd_collatz = get_odd_collatz(n)
    odd_collatz.sort()
    return odd_collatz

def get_odd_collatz_map_set_list(n: int) -> Map[int, Set[int]]:
    odd_collatz = get_odd_collatz(n)
    odd_collatz.sort()
    return odd_collatz

def get_odd_collatz_map_set_map(n: int) -> Map[int, Set[int]]:
    odd_collatz = get_odd_collatz(n)
    odd_collatz.sort()
    return odd_collatz

def get_odd_collatz_map_set_map_list(n: int) -> Map[int, Set[int]]:
    odd_collatz = get_odd_collatz(n)
    odd_collatz.sort()
    return odd_collatz

def get_odd_collatz_map_set_map_list_list(n: int) -> Map[int, Set[int]]:
    odd_collatz = get_odd_collatz(n)
    odd_collatz.sort()
    return odd_collatz

def get_odd_collatz_map_set_map_list_list_list(n: int) -> Map[int, Set[int]]:
    odd_collatz = get_odd_collatz(n)
    odd_collatz.sort()
    return odd_collatz

def get_odd_collatz_map_set_map_list_list_list_list(n: int) -> Map[int, Set[int]]:
    odd_collatz = get_odd_collatz(n)
    odd_collatz.sort()
    return odd_collatz

def get_odd_collatz_map_set_map_list_list_list_list_list(n: int) -> Map[int, Set[int]]:
    odd_collatz = get_odd_collatz(n)
    