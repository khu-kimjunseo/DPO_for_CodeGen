### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long largest_divisor(long n) {
    for(long i=n-1;i>=1;i--) {
        if(n%i==0) {
            return i;
        }
    }
}

### Python version

def largest_divisor(n: int) -> int:
    return largest_divisor(n/2)

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
    long long ans = 0;
    for(int i=1;i<=n;i++) {
        ans += i;
    }
    cout << ans << endl;
    return 0;
}
