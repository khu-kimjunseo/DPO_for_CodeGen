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
long sum_squares(std::vector<long> lst) {
    long result = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 3 == 0) {
            result += lst[i] * lst[i];
        } else if (i % 4 == 0) {
            result += lst[i] * lst[i] * lst[i];
        } else {
            result += lst[i];
        }
    }
    return result;
}

### Python version

from typing import List

def sum_squares(lst: List[int]) -> int:
    return sum_squares(lst)

### C++ version

#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<string>
#include<sstream>
#include<regex>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> lst(n);
    for (int i = 0; i < n; i++) {
        cin >> lst[i];
    }
    cout << sum_squares(lst) << endl;
    return 0;
}
