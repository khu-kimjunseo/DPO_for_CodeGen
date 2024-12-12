#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long x_or_y(long n, long x, long y) {
    if (n == 1) {
        return y;
    }
    for (long i = 2; i < n; i++) {
        if (n % i == 0) {
            return y;
            break;
        }
    }
    return x;
}
