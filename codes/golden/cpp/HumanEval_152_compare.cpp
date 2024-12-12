#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> compare(std::vector<long> game, std::vector<long> guess) {
    std::vector<long> res;
    for(int i=0;i<game.size();i++){
        res.push_back(abs(game[i]-guess[i]));
    }
    return res;
}
int main() {
    auto candidate = compare;
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3, (long)4, (long)5, (long)1})), (std::vector<long>({(long)1, (long)2, (long)3, (long)4, (long)2, (long)-2}))) == (std::vector<long>({(long)0, (long)0, (long)0, (long)0, (long)3, (long)3})));
    assert(candidate((std::vector<long>({(long)0, (long)0, (long)0, (long)0, (long)0, (long)0})), (std::vector<long>({(long)0, (long)0, (long)0, (long)0, (long)0, (long)0}))) == (std::vector<long>({(long)0, (long)0, (long)0, (long)0, (long)0, (long)0})));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3})), (std::vector<long>({(long)-1, (long)-2, (long)-3}))) == (std::vector<long>({(long)2, (long)4, (long)6})));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3, (long)5})), (std::vector<long>({(long)-1, (long)2, (long)3, (long)4}))) == (std::vector<long>({(long)2, (long)0, (long)0, (long)1})));
}
