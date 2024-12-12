### Python version

def largest_prime_factor(n: int) -> int:
    def is_prime(k):
        if k < 2:
            return False
        for i in range(2, k - 1):
            if k % i == 0:
                return False
        return True
    largest = 1
    for j in range(2, n + 1):
        if n % j == 0 and is_prime(j):
            largest = max(largest, j)
    return largest

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
long largest_prime_factor(long n) {
    long largest = 1;
    for (long i = 2; i <= n; i++) {
        if (n % i == 0) {
            largest = max(largest, i);
        }
    }
    return largest;
}

using namespace std;

int main() {
    long n;
    cin >> n;
    long largest = largest_prime_factor(n);
    cout << largest << endl;
    return 0;
}
