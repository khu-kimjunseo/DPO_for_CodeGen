### Python version

from typing import List

def will_it_fly(q: List[int], w: int) -> bool:
    if sum(q) > w:
        return False

    i, j = 0, len(q)-1
    while i<j:
        if q[i] != q[j]:
            return False
        i+=1
        j-=1
    return True

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
bool will_it_fly(std::vector<long> q, long w) {
    std::vector<long> v;
    std::stringstream ss;
    ss << q;
    std::string s = ss.str();
    std::regex r("[0-9]+");
    std::smatch m;
    while (std::regex_search(s, m, r)) {
        v.push_back(m[0].str());
    }
    return will_it_fly(v, w);
}

int main() {
    std::vector<long> q;
    std::stringstream ss;
    ss << "1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255";
    std::string s = ss.str();
    std::regex r("[0-9]+");
    std::smatch m;
    while (std::regex_search(s, m, r)) {
        q.push_back(m[0].str());
    }
    std::cout << "q: " << q << std::endl;
    std::cout << "will_it_fly(q, " << q.size() << "): " << will_it_fly(q, q.size()) << std::endl;
    std::cout << "q.size(): " << q.size() << std::endl;
    std::cout << "will_it_fly(q, " << q.size() << "): " << will_