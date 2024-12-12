### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool same_chars(std::string s0, std::string s1) {
    return std::set<char>(s0.begin(), s0.end()) == std::set<char>(s1.begin(), s1.end());
}

### Python version

def same_chars(s0: str, s1: str) -> bool:
    return same_chars(s0, s1)

### C++ version

#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<sstream>
#include<regex>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int main() {
    string s0, s1;
    cin >> s0 >> s1;
    cout << same_chars(s0, s1) << endl;
    return 0;
}
