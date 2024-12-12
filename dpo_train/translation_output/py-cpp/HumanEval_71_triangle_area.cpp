#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
float triangle_area(long a, long b, long c) {
    assert(a < b && b < c);
    assert(a + b <= c);
    assert(a + c <= b);
    assert(a + b <= c + a);
    assert(a + c <= b + c);
    assert(a + b + c <= c + a);
    assert(a + c + b <= c + a);
    assert(a + b + c + a <= c + a);
    assert(a + b + c + c <= c + a);
    assert(a + b + c + c + a <= c + a);
    assert(a + b + c + c + c <= c + a);
    assert(a + b + c + c + c + a <= c + a);
    assert(a + b + c + c + c + c <= c + a);
    assert(a + b + c + c + c + c + c <= c + a);
    assert(a + b + c + c + c + c + c + c <= c + a);
    assert(a + b + c + c + c + c + c + c + c <= c + a);
    assert(a + b + c + c + c + c + c + c + c + c <= c + a);
    assert(a + b + c + c + c + c + c + c + c + c + c <= c + a);
    assert(a + b + c + c + c + c + c + c + c + c + c + c <= c + a);
    assert(a + b + c + c + c + c + c + c + c + c + c + c + c <= c + a);
    assert(a + b + c + c + c + c + c + c + c + c + c + c + c + c <= c + a);
    assert(a + b + c + c + c + c + c + c + c + c + c + c + c + c + c <= c + a);
    assert(a + b + c + c + c + c + c + c + c + c + c + c + c + c + c + c <= c + a);
    assert(a + b + c + c + c + c + c + c + c + c + c + c + c + c + c + c + c <= c + a);
    assert(a + b + c + c + c + c + c + c + c + c + c + c + c + c + c + c + c + c <= c + a);
    assert(a + b + c + c + c + c + c + c + c + c + c + c + c + c + c + c + c + c + c <= c + a);
    assert(a + b + c + c + c + c + c + c + c + c + c + c + c + c + c + c + c + c + c + c <= c + a);
    assert(a + b + c + c + c + c + c + c + c + c + c + c + c + c + c + c + c + c + c + c + c <= c + a);
    assert(a + b + c + c + c + c + c + c + c + c + c + c + c + c + c + c + c + c + c + c + c + c <= c + a);
    assert(a + b + c + c + c + c + c + c + c + c + c + c + c + c + c + c + c + c +
}
int main() {
    auto candidate = triangle_area;
    assert(candidate((3), (4), (5)) == (6.0f));
    assert(candidate((1), (2), (10)) == (float(-1)));
    assert(candidate((4), (8), (5)) == (8.18f));
    assert(candidate((2), (2), (2)) == (1.73f));
    assert(candidate((1), (2), (3)) == (float(-1)));
    assert(candidate((10), (5), (7)) == (16.25f));
    assert(candidate((2), (6), (3)) == (float(-1)));
    assert(candidate((1), (1), (1)) == (0.43f));
    assert(candidate((2), (2), (10)) == (float(-1)));
}
