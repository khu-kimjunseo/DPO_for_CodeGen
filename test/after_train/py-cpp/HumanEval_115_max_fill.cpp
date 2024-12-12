#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long max_fill(std::vector<std::vector<long>> grid, long capacity) {
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
}
int main() {
    auto candidate = max_fill;
    assert(candidate((std::vector<std::vector<long>>({(std::vector<long>)std::vector<long>({(long)0, (long)0, (long)1, (long)0}), (std::vector<long>)std::vector<long>({(long)0, (long)1, (long)0, (long)0}), (std::vector<long>)std::vector<long>({(long)1, (long)1, (long)1, (long)1})})), (1)) == (6));
    assert(candidate((std::vector<std::vector<long>>({(std::vector<long>)std::vector<long>({(long)0, (long)0, (long)1, (long)1}), (std::vector<long>)std::vector<long>({(long)0, (long)0, (long)0, (long)0}), (std::vector<long>)std::vector<long>({(long)1, (long)1, (long)1, (long)1}), (std::vector<long>)std::vector<long>({(long)0, (long)1, (long)1, (long)1})})), (2)) == (5));
    assert(candidate((std::vector<std::vector<long>>({(std::vector<long>)std::vector<long>({(long)0, (long)0, (long)0}), (std::vector<long>)std::vector<long>({(long)0, (long)0, (long)0})})), (5)) == (0));
    assert(candidate((std::vector<std::vector<long>>({(std::vector<long>)std::vector<long>({(long)1, (long)1, (long)1, (long)1}), (std::vector<long>)std::vector<long>({(long)1, (long)1, (long)1, (long)1})})), (2)) == (4));
    assert(candidate((std::vector<std::vector<long>>({(std::vector<long>)std::vector<long>({(long)1, (long)1, (long)1, (long)1}), (std::vector<long>)std::vector<long>({(long)1, (long)1, (long)1, (long)1})})), (9)) == (2));
}
