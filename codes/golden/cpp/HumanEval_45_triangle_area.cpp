#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
float triangle_area(long a, long h) {
    return a * h / 2.0;
}
int main() {
    auto candidate = triangle_area;
    assert(candidate((5), (3)) == (7.5));
    assert(candidate((2), (2)) == (2.0));
    assert(candidate((10), (8)) == (40.0));
}
