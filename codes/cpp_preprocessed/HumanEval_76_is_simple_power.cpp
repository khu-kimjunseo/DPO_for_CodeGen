#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool is_simple_power(long x, long n) {
    if (n == 1) {
        return x == 1;
    }
    long power = 1;
    while (power < x) {
        power = power * n;
    }
    return power == x;
}
