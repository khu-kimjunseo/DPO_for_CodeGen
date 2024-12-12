#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long special_factorial(long n) {
    long fact = 1;
    for (long i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    auto candidate = special_factorial;
    assert(candidate((4)) == (288));
    assert(candidate((5)) == (34560));
    assert(candidate((7)) == (125411328000));
    assert(candidate((1)) == (1));
}
