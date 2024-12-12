### Python version

def triangle_area(a: int, h: int) -> float:
    return a * h / 2.0

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
float triangle_area(long a, long h) {
    assert(a > 0);
    assert(h > 0);
    return triangle_area(a - 1, h - 1) + triangle_area(a - 1, h);
}

int main() {
    int n, m;
    std::string s;
    std::cin >> n >> m;
    std::vector<std::string> v(n);
    std::vector<std::string>::iterator it;
    for (int i = 0; i < n; i++) {
        std::cin >> s;
        v[i] = s;
    }
    std::set<std::string> s1;
    std::set<std::string>::iterator it;
    for (int i = 0; i < n; i++) {
        std::string s = v[i];
        if (s1.find(s) == s1.end()) {
            s1.insert(s);
            it = s1.find(s);
            if (it == s1.end()) {
                it = s1.find(s);
            }
        }
    }
    std::set<std::string> s2;
    std::set<std::string>::iterator it;
    for (int i = 0; i < n; i++) {
        std::string s = v[i];
        if (s2.find(s) == s2.end()) {
            s2.insert(s);
            it = s2.find(s);
            if (it == s2.end()) {
                it = s2.find(s);
            }
        }
    }
    std::set<std::string> s3;
    std::set<std::string>::iterator it;
    for (int i = 0; i < n; i++) {
        std::string s = v[i];
        if (s3.find(s) == s3.end()) {
            s3.insert(s);
            it = s3.find(s);
            if (it == s3.end()) {
                it = s3.find(s);
            }
        }
    }
    std::set<std::string> s4;
    std::set<std::string>::iterator it;
    for (int i = 0; i < n; i++) {
        std::string s = v[i];
        if (s4.find(s) == s4.end()) {
            s4.insert(s);
            it = s4.find(s);
            if (it == s4.end()) {
                it = s4.find(s);
            }
        }
    }
    std::set<std::string> s5;
    std::set<std::string>::iterator it;
    for (int i = 0; i < n; i++) {
        std::string s = v[i];
        if (s5.find(s) == s5.end()) {
            s5.insert(s);
            it = s5.find(s);
            if (it == s5.end()) {
                it = s5.find(s);
            }
        }
    }
    std::set<std::string> s6;
    std::set<std::string>::iterator it;
    for (int i = 0; i < n; i++) {
        std::string s = v[i];
        if (s6.find(s) == s6.end()) {
            s6.insert(s);
            it = s6.find(s);
            if (it == s6.end()) {
                it = s6.find(s);
            }
        }
    }
    std::set<std::string> s7;
    std::set<std::