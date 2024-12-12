#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool below_threshold(std::vector<long> l, long t) {
    for (auto e: l) {
        if (e >= t) {
            return false;
        }
    }
    return true;
}
