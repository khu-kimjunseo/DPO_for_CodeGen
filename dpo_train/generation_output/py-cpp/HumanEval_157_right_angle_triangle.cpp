### Python version

def right_angle_triangle(a: int, b: int, c: int) -> bool:
    return a*a == b*b + c*c or b*b == a*a + c*c or c*c == a*a + b*b

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
bool right_angle_triangle(long a, long b, long c) {
    if (a == b) {
        return right_angle_triangle(b, c, c);
    } else if (a == c) {
        return right_angle_triangle(b, c, a);
    } else if (b == c) {
        return right_angle_triangle(a, b, c);
    } else {
        return false;
    }
}

int main() {
    long a, b, c;
    std::cin >> a >> b >> c;
    std::cout << right_angle_triangle(a, b, c) << std::endl;
    return 0;
}
