### Python version

def digitSum(s: str) -> int:
    if s == "": return 0
    return sum(ord(char) if char.isupper() else 0 for char in s)

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
long digitSum(std::string s) {
    std::vector<std::string> v;
    std::stringstream ss(s);
    std::string s1;
    while (std::getline(ss, s1, ',')) {
        v.push_back(s1);
    }
    std::sort(v.begin(), v.end());
    long sum = 0;
    for (auto &s : v) {
        sum += digitSum(s);
    }
    return sum;
}

int main() {
    std::string s;
    std::cin >> s;
    std::cout << digitSum(s) << std::endl;
    return 0;
}
