### Python version

def largest_divisor(n: int) -> int:
    for i in reversed(range(n)):
        if n % i == 0:
            return i

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
long largest_divisor(long n) {
    long ret = 1;
    while (n > 0) {
        if (n % 2 == 0) {
            ret *= 2;
        }
        n /= 2;
    }
    return ret;
}

using namespace std;

int main() {
    long n;
    cin >> n;
    long ret = largest_divisor(n);
    cout << ret << endl;
    return 0;
}
