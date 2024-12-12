#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long largest_divisor(long n) {
    for(long i=n-1;i>=1;i--) {
        if(n%i==0) {
            return i;
        }
    }
}
int main() {
    auto candidate = largest_divisor;
    assert(candidate((3)) == (1));
    assert(candidate((7)) == (1));
    assert(candidate((10)) == (5));
    assert(candidate((100)) == (50));
    assert(candidate((49)) == (7));
}
