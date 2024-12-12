#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
float median(std::vector<long> l) {
    std::sort(l.begin(), l.end());
    if (l.size() % 2 == 1) {
        return l[l.size() / 2];
    } else {
        return (l[l.size() / 2 - 1] + l[l.size() / 2]) / 2.0;
    }
}
