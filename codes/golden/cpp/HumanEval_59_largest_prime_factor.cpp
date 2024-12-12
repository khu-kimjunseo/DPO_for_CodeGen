#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long largest_prime_factor(long n) {
    auto is_prime=[](long k){
        if(k<2) return false;
        for(long i=2;i<k;i++) if(k%i==0) return false;
        return true;
    };
    long largest=1;
    for(long j=2;j<=n;j++) if(n%j==0 && is_prime(j)) largest=std::max(largest,j);
    return largest;
}
int main() {
    auto candidate = largest_prime_factor;
    assert(candidate((15)) == (5));
    assert(candidate((27)) == (3));
    assert(candidate((63)) == (7));
    assert(candidate((330)) == (11));
    assert(candidate((13195)) == (29));
}
