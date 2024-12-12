#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long sum_to_n(long n) {
    long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += i;
    }
    return sum;
}
int main() {
    auto candidate = sum_to_n;
    assert(candidate((1)) == (1));
    assert(candidate((6)) == (21));
    assert(candidate((11)) == (66));
    assert(candidate((30)) == (465));
    assert(candidate((100)) == (5050));
}
