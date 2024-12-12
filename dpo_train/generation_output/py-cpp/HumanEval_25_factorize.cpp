### Python version

from typing import List

def factorize(n: int) -> List[int]:
    import math
    fact = []
    i = 2
    while i <= int(math.sqrt(n) + 1):
        if n % i == 0:
            fact.append(i)
            n //= i
        else:
            i += 1

    if n > 1:
        fact.append(n)
    return fact

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
std::vector<long> factorize(long n) {
    std::vector<long> res;
    if (n == 1) {
        res.push_back(1);
        return res;
    }
    res.push_back(n);
    std::vector<long> factors = factorize(n - 1);
    for (long i = 0; i < factors.size(); i++) {
        res.push_back(factors[i] * factors[i]);
    }
    return res;
}

std::vector<long> factorize(long n) {
    std::vector<long> res;
    if (n == 1) {
        res.push_back(1);
        return res;
    }
    res.push_back(n);
    std::vector<long> factors = factorize(n - 1);
    for (long i = 0; i < factors.size(); i++) {
        res.push_back(factors[i] * factors[i]);
    }
    return res;
}

std::vector<long> factorize(long n) {
    std::vector<long> res;
    if (n == 1) {
        res.push_back(1);
        return res;
    }
    res.push_back(n);
    std::vector<long> factors = factorize(n - 1);
    for (long i = 0; i < factors.size(); i++) {
        res.push_back(factors[i] * factors[i]);
    }
    return res;
}

std::vector<long> factorize(long n) {
    std::vector<long> res;
    if (n == 1) {
        res.push_back(1);
        return res;
    }
    res.push_back(n);
    std::vector<long> factors = factorize(n - 1);
    for (long i = 0; i < factors.size(); i++) {
        res.push_back(factors[i] * factors[i]);
    }
    return res;
}

std::vector<long> factorize(long n) {
    std::vector<long> res;
    if (n == 1) {
        res.push_back(1);
        return res;
    }
    res.push_back(n);
    std::vector<long> factors = factorize(n - 1);
    for (long i = 0; i < factors.size(); i++) {
        res.push_back(factors[i] * factors[i]);
    }
    return res;
}

std::vector<long> factorize(long n) {
    std::vector<long> res;
    if (n == 1) {
        res.push_back(1);
        return res;
    }
    res.push_back(n);
    std::vector<long> factors = factorize(n - 1);
    for (long i = 0; i < factors.size(); i++) {
        res.push_back(factors[i] * factors[i]);
    }
    return res;
}

std::vector<long> factorize(long n) {
    std::vector<long> res;
    if (n == 1) {
        res.push_back(1);
        return res;
    }
    res.push_back(n);
    std::vector<long> factors = factorize(n - 1);
    for (long i = 0; i < factors.