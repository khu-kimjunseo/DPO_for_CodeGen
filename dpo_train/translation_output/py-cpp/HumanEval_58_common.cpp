#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<long> common(std::vector<long> l1, std::vector<long> l2) {
    std::vector<long> ret;
    std::set<long> set1;
    std::set<long> set2;
    std::map<long, long> map1;
    std::map<long, long> map2;
    std::unordered_map<long, long> unmap1;
    std::unordered_map<long, long> unmap2;
    std::unordered_set<long> unset1;
    std::unordered_set<long> unset2;
    std::stringstream ss;
    ss << l1 << " " << l2;
    std::regex rx("[0-9]+");
    std::smatch m;
    while (std::regex_search(ss.str(), m, rx)) {
        long num = m[0].str();
        long num1 = m[1].str();
        long num2 = m[2].str();
        if (num1 == num2) {
            ret.push_back(num);
            set1.insert(num);
        } else if (num1 > num2) {
            set2.insert(num);
        } else {
            unset1.insert(num);
        }
    }
    for (long i = 0; i < l1.size(); i++) {
        if (set1.count(l1[i]) == 1) {
            ret.push_back(l1[i]);
            set1.erase(l1[i]);
        }
    }
    for (long i = 0; i < l2.size(); i++) {
        if (set2.count(l2[i]) == 1) {
            ret.push_back(l2[i]);
            set2.erase(l2[i]);
        }
    }
    for (long i = 0; i < l1.size(); i++) {
        if (set1.count(l1[i]) == 0) {
            ret.push_back(l1[i]);
            set1.insert(l1[i]);
        }
    }
    for (long i = 0; i < l2.size(); i++) {
        if (set2.count(l2[i]) == 0) {
            ret.push_back(l2[i]);
            set2.insert(l2[i]);
        }
    }
    for (long i = 0; i < l1.size(); i++) {
        if (set1.count(l1[i]) == 0) {
            ret.push_back(l1[i]);
            set1.insert(l1[i]);
        }
    }
    for (long i = 0; i < l2.size(); i++) {
        if (set2.count(l2[i]) == 0) {
            ret.push_back(l2[i]);
            set2.insert(l2[i]);
        }
    }
    for (long i = 0; i < l1.size(); i++) {
        if (set1.count(l1[i]) == 0) {
            ret.push_back(l1[i]);
            set1.insert(l1[i]);
        }
    }
    for (long i = 0; i < l2.size(); i++) {
        if (set2.count(l2[i]) == 0) {
            ret.push_back(l2[i]);
            set2.insert(l2[i]);
}
int main() {
    auto candidate = common;
    assert(candidate((std::vector<long>({(long)1, (long)4, (long)3, (long)34, (long)653, (long)2, (long)5})), (std::vector<long>({(long)5, (long)7, (long)1, (long)5, (long)9, (long)653, (long)121}))) == (std::vector<long>({(long)1, (long)5, (long)653})));
    assert(candidate((std::vector<long>({(long)5, (long)3, (long)2, (long)8})), (std::vector<long>({(long)3, (long)2}))) == (std::vector<long>({(long)2, (long)3})));
    assert(candidate((std::vector<long>({(long)4, (long)3, (long)2, (long)8})), (std::vector<long>({(long)3, (long)2, (long)4}))) == (std::vector<long>({(long)2, (long)3, (long)4})));
    assert(candidate((std::vector<long>({(long)4, (long)3, (long)2, (long)8})), (std::vector<long>())) == (std::vector<long>()));
}
