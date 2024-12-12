#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long fruit_distribution(std::string s, long n) {
    std::vector<int> lis;
    std::stringstream ss(s);
    std::string word;
    while(ss >> word) {
        if(std::regex_match(word, std::regex("\\d+"))) {
            lis.push_back(std::stoi(word));
        }
    }
    return n - std::accumulate(lis.begin(), lis.end(), 0);
}
int main() {
    auto candidate = fruit_distribution;
    assert(candidate(("5 apples and 6 oranges"), (19)) == (8));
    assert(candidate(("5 apples and 6 oranges"), (21)) == (10));
    assert(candidate(("0 apples and 1 oranges"), (3)) == (2));
    assert(candidate(("1 apples and 0 oranges"), (3)) == (2));
    assert(candidate(("2 apples and 3 oranges"), (100)) == (95));
    assert(candidate(("2 apples and 3 oranges"), (5)) == (0));
    assert(candidate(("1 apples and 100 oranges"), (120)) == (19));
}
