#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> eat(long number, long need, long remaining) {
    if(need <= remaining){
        return { number + need , remaining-need };
    } else{
        return { number + remaining , 0};
    }
}
int main() {
    auto candidate = eat;
    assert(candidate((5), (6), (10)) == (std::vector<long>({(long)11, (long)4})));
    assert(candidate((4), (8), (9)) == (std::vector<long>({(long)12, (long)1})));
    assert(candidate((1), (10), (10)) == (std::vector<long>({(long)11, (long)0})));
    assert(candidate((2), (11), (5)) == (std::vector<long>({(long)7, (long)0})));
    assert(candidate((4), (5), (7)) == (std::vector<long>({(long)9, (long)2})));
    assert(candidate((4), (5), (1)) == (std::vector<long>({(long)5, (long)0})));
}
