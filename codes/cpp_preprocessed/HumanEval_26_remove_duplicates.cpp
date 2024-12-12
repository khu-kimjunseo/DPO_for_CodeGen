#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> remove_duplicates(std::vector<long> numbers) {
    std::map<long, long> c;
    for (auto n : numbers) {
        c[n]++;
    }
    std::vector<long> result;
    for (auto n : numbers) {
        if (c[n] <= 1) {
            result.push_back(n);
        }
    }
    return result;
}
