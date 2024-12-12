### Python version

def multiply(a: int, b: int) -> int:
    return abs(a % 10) * abs(b % 10)

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
long multiply(long a, long b) {
    long result = 0;
    if (a == 0) {
        return b;
    }
    if (b == 0) {
        return a;
    }
    if (a < 0) {
        result = -result;
        a = -a;
    }
    if (b < 0) {
        result = -result;
        b = -b;
    }
    result = a * b;
    return result;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << multiply(a, b) << std::endl;
    return 0;
}
