#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool below_zero(std::vector<long> operations) {
    long balance = 0;
    for (auto op : operations) {
        balance += op;
        if (balance < 0) {
            return true;
        }
    }
    return false;
}
int main() {
    auto candidate = below_zero;
    assert(candidate((std::vector<long>())) == (false));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)-3, (long)1, (long)2, (long)-3}))) == (false));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)-4, (long)5, (long)6}))) == (true));
    assert(candidate((std::vector<long>({(long)1, (long)-1, (long)2, (long)-2, (long)5, (long)-5, (long)4, (long)-4}))) == (false));
    assert(candidate((std::vector<long>({(long)1, (long)-1, (long)2, (long)-2, (long)5, (long)-5, (long)4, (long)-5}))) == (true));
    assert(candidate((std::vector<long>({(long)1, (long)-2, (long)2, (long)-2, (long)5, (long)-5, (long)4, (long)-4}))) == (true));
}
