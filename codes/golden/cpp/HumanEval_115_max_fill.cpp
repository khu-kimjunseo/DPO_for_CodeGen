#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long max_fill(std::vector<std::vector<long>> grid, long capacity) {
    long sum = 0;
    for (auto arr : grid) {
        sum += ceil(std::accumulate(arr.begin(), arr.end(), 0.0) / capacity);
    }
    return sum;
}
int main() {
    auto candidate = max_fill;
    assert(candidate((std::vector<std::vector<long>>({(std::vector<long>)std::vector<long>({(long)0, (long)0, (long)1, (long)0}), (std::vector<long>)std::vector<long>({(long)0, (long)1, (long)0, (long)0}), (std::vector<long>)std::vector<long>({(long)1, (long)1, (long)1, (long)1})})), (1)) == (6));
    assert(candidate((std::vector<std::vector<long>>({(std::vector<long>)std::vector<long>({(long)0, (long)0, (long)1, (long)1}), (std::vector<long>)std::vector<long>({(long)0, (long)0, (long)0, (long)0}), (std::vector<long>)std::vector<long>({(long)1, (long)1, (long)1, (long)1}), (std::vector<long>)std::vector<long>({(long)0, (long)1, (long)1, (long)1})})), (2)) == (5));
    assert(candidate((std::vector<std::vector<long>>({(std::vector<long>)std::vector<long>({(long)0, (long)0, (long)0}), (std::vector<long>)std::vector<long>({(long)0, (long)0, (long)0})})), (5)) == (0));
    assert(candidate((std::vector<std::vector<long>>({(std::vector<long>)std::vector<long>({(long)1, (long)1, (long)1, (long)1}), (std::vector<long>)std::vector<long>({(long)1, (long)1, (long)1, (long)1})})), (2)) == (4));
    assert(candidate((std::vector<std::vector<long>>({(std::vector<long>)std::vector<long>({(long)1, (long)1, (long)1, (long)1}), (std::vector<long>)std::vector<long>({(long)1, (long)1, (long)1, (long)1})})), (9)) == (2));
}
