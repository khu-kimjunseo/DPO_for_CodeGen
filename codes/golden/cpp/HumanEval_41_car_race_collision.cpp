#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long car_race_collision(long n) {
    return n*n;
}
int main() {
    auto candidate = car_race_collision;
    assert(candidate((2)) == (4));
    assert(candidate((3)) == (9));
    assert(candidate((4)) == (16));
    assert(candidate((8)) == (64));
    assert(candidate((10)) == (100));
}
