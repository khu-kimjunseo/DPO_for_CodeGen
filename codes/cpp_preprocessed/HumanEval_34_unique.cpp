#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> unique(std::vector<long> l) {
    std::sort(l.begin(), l.end()); l.erase(std::unique(l.begin(), l.end()), l.end()); return l;
}
