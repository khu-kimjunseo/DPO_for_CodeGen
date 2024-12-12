#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
float triangle_area(long a, long h) {
    assert(a > 0);
    assert(h > 0);
    return triangleArea(a - 1, h - 1);
}
int main() {
    auto candidate = triangle_area;
    assert(candidate((5), (3)) == (7.5f));
    assert(candidate((2), (2)) == (2.0f));
    assert(candidate((10), (8)) == (40.0f));
}
