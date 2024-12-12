### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long sum_to_n(long n) {
    return (n * (n + 1)) / 2;
}

### Python version

def sum_to_n(n: int) -> int:
    return sum_to_n(n)

### C++ version

#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<string>
#include<sstream>
#include<regex>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<utility>
#include<iomanip>
#include<cctype>
#include<cstdint>

using namespace std;

int main() {
    int n;
    cin >> n;
    long sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
    }
    cout << sum << endl;
    return 0;
}
