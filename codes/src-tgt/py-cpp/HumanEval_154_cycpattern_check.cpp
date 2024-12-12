### Python version

def cycpattern_check(a: str , b: str) -> bool:
    l = len(b)
    pat = b + b
    for i in range(len(a) - l + 1):
        for j in range(l + 1):
            if a[i:i+l] == pat[j:j+l]:
                return True
    return False

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool cycpattern_check(std::string a, std::string b) {
    int l = b.length();
    std::string pat = b + b;
    for(int i = 0; i <= a.length() - l; i++) {
        for(int j = 0; j <= l; j++) {
            if(a.substr(i, l) == pat.substr(j, l)) {
                return true;
            }
        }
    }
    return false;
}

