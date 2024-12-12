#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long choose_num(long x, long y) {
    if (x > y) {
        return -1;
    }
    if (y % 2 == 0) {
        return y;
    }
    if (x == y) {
        return -1;
    }
    return y - 1;
}
