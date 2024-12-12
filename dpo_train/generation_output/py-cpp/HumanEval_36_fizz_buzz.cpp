### Python version

def fizz_buzz(n: int) -> int:
    ns = []
    for i in range(n):
        if i % 11 == 0 or i % 13 == 0:
            ns.append(i)
    s = ''.join(list(map(str, ns)))
    ans = 0
    for c in s:
        ans += (c == '7')
    return ans

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
long fizz_buzz(long n) {
    long ans = 0;
    for (long i = 1; i <= n; i++) {
        ans += (i % 11 == 0 || i % 13 == 0) ? fizz_buzz(i) : 0;
    }
    return ans;
}

int main() {
    long n;
    std::cin >> n;
    std::cout << fizz_buzz(n) << std::endl;
    return 0;
}
