### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static float triangleArea(long a, long h) {
        return a * h / 2.0f;
    }
}

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
float triangle_area(long a, long h) {
    assert(a > 0);
    assert(h > 0);
    return triangleArea(a - 1, h - 1);
}

int main() {
    long a = 0, h = 0;
    std::cin >> a >> h;
    assert(a > 0);
    assert(h > 0);
    std::cout << triangle_area(a, h) << std::endl;
    return 0;
}
