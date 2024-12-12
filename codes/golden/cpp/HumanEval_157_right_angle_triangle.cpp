#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool right_angle_triangle(long a, long b, long c) {
    return a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b;
}
int main() {
    auto candidate = right_angle_triangle;
    assert(candidate((3), (4), (5)) == (true));
    assert(candidate((1), (2), (3)) == (false));
    assert(candidate((10), (6), (8)) == (true));
    assert(candidate((2), (2), (2)) == (false));
    assert(candidate((7), (24), (25)) == (true));
    assert(candidate((10), (5), (7)) == (false));
    assert(candidate((5), (12), (13)) == (true));
    assert(candidate((15), (8), (17)) == (true));
    assert(candidate((48), (55), (73)) == (true));
    assert(candidate((1), (1), (1)) == (false));
    assert(candidate((2), (2), (10)) == (false));
}
