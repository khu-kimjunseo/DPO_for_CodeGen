### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> count_up_to(long n) {
    std::vector<long> primes;
    for (long i = 2; i < n; i++) {
        bool is_prime = true;
        for (long j = 2; j < i; j++) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            primes.push_back(i);
        }
    }
    return primes;
}

### Python version

from typing import List

def count_up_to(n: int) -> List[int]:
    primes = count_up_to(n)
    return [primes[i] for i in range(len(primes))]

### C++ version

def count_up_to(n: int) -> List[int]:
    primes = count_up_to(n)
    return [primes[i] for i in range(len(primes))]

### Python version

def count_up_to(n: int) -> List[int]:
    primes = count_up_to(n)
    return [primes[i] for i in range(len(primes))]

### C++ version

def count_up_to(n: int) -> List[int]:
    primes = count_up_to(n)
    return [primes[i] for i in range(len(primes))]

### Python version

def count_up_to(n: int) -> List[int]:
    primes = count_up_to(n)
    return [primes[i] for i in range(len(primes))]

### C++ version

def count_up_to(n: int) -> List[int]:
    primes = count_up_to(n)
    return [primes[i] for i in range(len(primes))]

### Python version

def count_up_to(n: int) -> List[int]:
    primes = count_up_to(n)
    return [primes[i] for i in range(len(primes))]

### C++ version

def count_up_to(n: int) -> List[int]:
    primes = count_up_to(n)
    return [primes[i] for i in range(len(primes))]

### Python version

def count_up_to(n: int) -> List[int]:
    primes = count_up_to(n)
    return [primes[i] for i in range(len(primes))]

### C++ version

def count_up_to(n: int) -> List[int]:
    primes = count_up_to(n)
    return [primes[i] for i in range(len(primes))]

### Python version

def count_up_to(n: int) -> List[int]:
    primes = count_up_to(n)
    return [primes[i] for i in range(len(primes))]

### C++ version

def count_up_to(n: int) -> List[int]:
    primes = count_up_to(n)
    return [primes[i] for i in range(len(primes))]

### Python version

def count_up_to(n: int) -> List[int]:
    primes = count_up_to(n)
    return [primes[i] for i in range(len(primes))]

### C++ version

def count_up_to(n: int) -> List[int]:
    primes = count_up_to(n)
    return [primes[i] for i in range(len(primes))]

### Python version

def count_up_to(n: int) -> List[int]:
    primes = count_up_to(n)
    