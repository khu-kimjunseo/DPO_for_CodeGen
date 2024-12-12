#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long count_nums(std::vector<long> arr) {
    std::unordered_map<long, long> map;
    std::unordered_set<long> set;
    std::vector<long>::iterator it;
    for (it = arr.begin(); it != arr.end(); ++it) {
        map[*it] = 1;
    }
    for (it = arr.begin(); it != arr.end(); ++it) {
        set.insert(*it);
    }
    long sum = 0;
    for (it = arr.begin(); it != arr.end(); ++it) {
        sum += map[*it];
    }
    return sum;
}
int main() {
    auto candidate = count_nums;
    assert(candidate((std::vector<long>())) == (0));
    assert(candidate((std::vector<long>({(long)-1, (long)-2, (long)0}))) == (0));
    assert(candidate((std::vector<long>({(long)1, (long)1, (long)2, (long)-2, (long)3, (long)4, (long)5}))) == (6));
    assert(candidate((std::vector<long>({(long)1, (long)6, (long)9, (long)-6, (long)0, (long)1, (long)5}))) == (5));
    assert(candidate((std::vector<long>({(long)1, (long)100, (long)98, (long)-7, (long)1, (long)-1}))) == (4));
    assert(candidate((std::vector<long>({(long)12, (long)23, (long)34, (long)-45, (long)-56, (long)0}))) == (5));
    assert(candidate((std::vector<long>({(long)0, (long)1}))) == (1));
    assert(candidate((std::vector<long>({(long)1}))) == (1));
}
