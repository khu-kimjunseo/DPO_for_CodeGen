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
