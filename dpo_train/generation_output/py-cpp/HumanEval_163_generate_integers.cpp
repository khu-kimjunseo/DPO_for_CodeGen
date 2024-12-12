### Python version

from typing import List

def generate_integers(a: int, b: int) -> List[int]:
    lower = max(2, min(a, b))
    upper = min(8, max(a, b))

    return [i for i in range(lower, upper+1) if i % 2 == 0]

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
std::vector<long> generate_integers(long a, long b) {
    std::vector<long> result;
    result.reserve(a);
    for (long i = 0; i < a; i++) {
        result.push_back(i);
    }
    for (long i = 0; i < b; i++) {
        result.push_back(i);
    }
    return result;
}

std::string generate_string(long a, long b) {
    std::stringstream ss;
    ss << a << " " << b;
    return ss.str();
}

std::string generate_string(long a, long b, long c) {
    std::stringstream ss;
    ss << a << " " << b << " " << c;
    return ss.str();
}

std::string generate_string(long a, long b, long c, long d) {
    std::stringstream ss;
    ss << a << " " << b << " " << c << " " << d;
    return ss.str();
}

std::string generate_string(long a, long b, long c, long d, long e) {
    std::stringstream ss;
    ss << a << " " << b << " " << c << " " << d << " " << e;
    return ss.str();
}

std::string generate_string(long a, long b, long c, long d, long e, long f) {
    std::stringstream ss;
    ss << a << " " << b << " " << c << " " << d << " " << e << " " << f;
    return ss.str();
}

std::string generate_string(long a, long b, long c, long d, long e, long f, long g) {
    std::stringstream ss;
    ss << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g;
    return ss.str();
}

std::string generate_string(long a, long b, long c, long d, long e, long f, long g, long h) {
    std::stringstream ss;
    ss << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g << " " << h;
    return ss.str();
}

std::string generate_string(long a, long b, long c, long d, long e, long f, long g, long h, long i) {
    std::stringstream ss;
    ss << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g << " " << h << " " << i;
    return ss.str();
}

std::string generate_string(long a, long b, long c, long d, long e, long f, long g, long h, long i, long j) {
    std::stringstream ss;
    ss << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g << " " << h << " " << i << " " << j;
    return ss.str();
}

std::string generate_string(long a, long b, long c, long d, long e, long f, long g, long h, long i, long j, long k) {
    std::stringstream ss;
    ss << a << " " << b << " " << c << " " << d << " " << e << " "