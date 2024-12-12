### Python version

def triangle_area(a: int, b: int, c: int) -> float:
    if a + b <= c or a + c <= b or b + c <= a:
        return -1 
    s = (a + b + c)/2    
    area = (s * (s - a) * (s - b) * (s - c)) ** 0.5
    area = round(area, 2)
    return area

### C++ version

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