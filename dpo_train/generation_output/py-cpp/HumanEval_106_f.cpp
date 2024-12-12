### Python version

from typing import List

def f(n: int) -> List[int]:
    ret = []
    for i in range(1,n+1):
        if i%2 == 0:
            x = 1
            for j in range(1,i+1): x *= j
            ret += [x]
        else:
            x = 0
            for j in range(1,i+1): x += j
            ret += [x]
    return ret

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
std::vector<long> f(long n) {
    std::vector<long> ret;
    std::stringstream ss;
    ss << n;
    std::string s = ss.str();
    std::regex rx("[0-9]+");
    std::smatch m;
    while (std::regex_search(s,m,rx)) {
        ret.push_back(m[0].str());
    }
    return ret;
}

int main() {
    std::vector<long> v = f(10);
    std::cout << "v: " << v << std::endl;
    std::cout << "f(10): " << f(10) << std::endl;
    return 0;
}
