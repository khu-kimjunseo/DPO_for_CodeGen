#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long hex_key(std::string num) {
    std::string primes = "2357BD";
    int total = 0;
    for (int i = 0; i < num.length(); i++) {
        if (primes.find(num[i]) != std::string::npos) {
            total++;
        }
    }
    return total;
}
