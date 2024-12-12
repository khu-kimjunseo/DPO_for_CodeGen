### Python version

def sum_to_n(n: int) -> int:
    return sum(range(n + 1))

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
long sum_to_n(long n) {
    long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    std::cin >> v;
    std::map<int, int> m;
    std::set<int> s;
    std::unordered_map<int, int> u;
    std::unordered_set<int> u2;
    std::stringstream ss;
    std::regex rx("^[0-9]+$");
    std::smatch m;
    std::regex_match(v.begin(), v.end(), m);
    while (m.size() > 0) {
        ss << m.str();
        std::smatch m2;
        std::regex_match(ss.str(), m2, rx);
        if (m2.size() > 0) {
            int i = m2.str(1);
            if (i == 0) {
                m.erase(m.find(i));
            } else {
                m.erase(m.find(i));
            }
        }
        m.clear();
    }
    while (s.size() > 0) {
        ss << s.begin()->first << " " << s.begin()->second;
        std::smatch m2;
        std::regex_match(ss.str(), m2, rx);
        if (m2.size() > 0) {
            int i = m2.str(1);
            if (i == 0) {
                s.erase(s.find(i));
            } else {
                s.erase(s.find(i));
            }
        }
        s.clear();
    }
    while (u.size() > 0) {
        ss << u.begin()->first << " " << u.begin()->second;
        std::smatch m2;
        std::regex_match(ss.str(), m2, rx);
        if (m2.size() > 0) {
            int i = m2.str(1);
            if (i == 0) {
                u.erase(u.find(i));
            } else {
                u.erase(u.find(i));
            }
        }
        u.clear();
    }
    while (u2.size() > 0) {
        ss << u2.begin()->first << " " << u2.begin()->second;
        std::smatch m2;
        std::regex_match(ss.str(), m2, rx);
        if (m2.size() > 0) {
            int i = m2.str(1);
            if (i == 0) {
                u2.erase(u2.find(i));
            } else {
                u2.erase(u2.find(i));
            }
        }
        u2.clear();
    }
    std::cout << sum_to_n(n) << std::endl;
    return 0;
}
