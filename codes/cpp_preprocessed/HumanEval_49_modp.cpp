#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long modp(long n, long p) {
    long ret = 1;
    for (int i = 0; i < n; i++) {
        ret = (2 * ret) % p;
    }
    return ret;
}