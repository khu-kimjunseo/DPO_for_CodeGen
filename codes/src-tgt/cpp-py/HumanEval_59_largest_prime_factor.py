### C++ version

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


### Python version

def largest_prime_factor(n: int) -> int:
    def is_prime(k):
        if k < 2:
            return False
        for i in range(2, k - 1):
            if k % i == 0:
                return False
        return True
    largest = 1
    for j in range(2, n + 1):
        if n % j == 0 and is_prime(j):
            largest = max(largest, j)
    return largest
