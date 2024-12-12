### C++ version

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


### Python version

def right_angle_triangle(a: int, b: int, c: int) -> bool:
    return a*a == b*b + c*c or b*b == a*a + c*c or c*c == a*a + b*b
