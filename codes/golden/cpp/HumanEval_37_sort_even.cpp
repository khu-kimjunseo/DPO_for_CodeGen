#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> sort_even(std::vector<long> l) {
    std::vector<long> evens;
    for(int i=0;i<l.size();i+=2) evens.push_back(l[i]);
    std::vector<long> odds;
    for(int i=1;i<l.size();i+=2) odds.push_back(l[i]);
    std::sort(evens.begin(), evens.end());
    std::vector<long> ans;
    for(int i=0;i<odds.size();i++) {
        ans.push_back(evens[i]);
        ans.push_back(odds[i]);
    }
    if(evens.size() > odds.size()) ans.push_back(evens[evens.size()-1]);
    return ans;
}
int main() {
    auto candidate = sort_even;
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3}))) == (std::vector<long>({(long)1, (long)2, (long)3})));
    assert(candidate((std::vector<long>({(long)5, (long)3, (long)-5, (long)2, (long)-3, (long)3, (long)9, (long)0, (long)123, (long)1, (long)-10}))) == (std::vector<long>({(long)-10, (long)3, (long)-5, (long)2, (long)-3, (long)3, (long)5, (long)0, (long)9, (long)1, (long)123})));
    assert(candidate((std::vector<long>({(long)5, (long)8, (long)-12, (long)4, (long)23, (long)2, (long)3, (long)11, (long)12, (long)-10}))) == (std::vector<long>({(long)-12, (long)8, (long)3, (long)4, (long)5, (long)2, (long)12, (long)11, (long)23, (long)-10})));
}
