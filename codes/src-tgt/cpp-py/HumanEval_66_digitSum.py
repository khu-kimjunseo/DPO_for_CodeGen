### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long digitSum(std::string s) {
    if (s == "") return 0;
    long ans = 0;
    for (char c : s) {
        if (isupper(c)) ans += c;
    }
    return ans;
}


### Python version

def digitSum(s: str) -> int:
    if s == "": return 0
    return sum(ord(char) if char.isupper() else 0 for char in s)
