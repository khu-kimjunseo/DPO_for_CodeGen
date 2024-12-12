### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool below_threshold(std::vector<long> l, long t) {
    for (auto e: l) {
        if (e >= t) {
            return false;
        }
    }
    return true;
}

### Python version

from typing import List

def below_threshold(l: List[int], t: int) -> bool:
    return below_threshold(l, t) or below_threshold(l, t - 1)

### C++ version

#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<sstream>
#include<regex>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<cassert>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int m = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] < m) {
            m = v[i];
        }
    }
    cout << m << endl;
    return 0;
}
