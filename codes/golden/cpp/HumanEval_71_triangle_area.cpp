#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
float triangle_area(long a, long b, long c) {
    if (a + b <= c || a + c <= b || b + c <= a) {
        return -1;
    }
    float s = (a + b + c) / 2.0;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    area = round(area * 100) / 100;
    return area;
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
