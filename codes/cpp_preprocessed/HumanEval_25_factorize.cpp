#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> factorize(long n) {
    std::vector<long> fact;
    long i = 2;
    while (i <= sqrt(n) + 1) {
        if (n % i == 0) {
            fact.push_back(i);
            n /= i;
        } else {
            i++;
        }
    }
    if (n > 1) {
        fact.push_back(n);
    }
    return fact;
}
