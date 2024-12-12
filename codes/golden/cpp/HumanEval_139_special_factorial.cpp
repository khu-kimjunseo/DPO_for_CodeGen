#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long special_factorial(long n) {
    long fact_i = 1;
    long special_fact = 1;
    for(long i = 1; i <= n; i++) {
        fact_i *= i;
        special_fact *= fact_i;
    }
    return special_fact;
}
int main() {
    auto candidate = special_factorial;
    assert(candidate((4)) == (288));
    assert(candidate((5)) == (34560));
    assert(candidate((7)) == (125411328000));
    assert(candidate((1)) == (1));
}
