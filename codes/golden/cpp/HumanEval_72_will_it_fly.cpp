#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool will_it_fly(std::vector<long> q, long w) {
    if (std::accumulate(q.begin(), q.end(), 0) > w) {
        return false;
    }
    int i=0, j=q.size()-1;
    while (i<j) {
        if (q[i] != q[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main() {
    auto candidate = will_it_fly;
    assert(candidate((std::vector<long>({(long)3, (long)2, (long)3})), (9)) == (true));
    assert(candidate((std::vector<long>({(long)1, (long)2})), (5)) == (false));
    assert(candidate((std::vector<long>({(long)3})), (5)) == (true));
    assert(candidate((std::vector<long>({(long)3, (long)2, (long)3})), (1)) == (false));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3})), (6)) == (false));
    assert(candidate((std::vector<long>({(long)5})), (5)) == (true));
}
