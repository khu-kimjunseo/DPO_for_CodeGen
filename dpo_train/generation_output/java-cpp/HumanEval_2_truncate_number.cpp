### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static float truncateNumber(float number) {
        return number % 1.0f;
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
float truncate_number(float number) {
    assert(number > 0.0f);
    return truncateNumber(number / 2.0f);
}

class Solution {
public:
    int numTests(int n) {
        int res = 0;
        for (int i = 0; i < n; i++) {
            res += truncate_number(i);
        }
        return res;
    }
};

int main() {
    Solution sol;
    assert(sol.numTests(1) == 1);
    assert(sol.numTests(2) == 1);
    assert(sol.numTests(3) == 1);
    assert(sol.numTests(4) == 1);
    assert(sol.numTests(5) == 1);
    assert(sol.numTests(6) == 1);
    assert(sol.numTests(7) == 1);
    assert(sol.numTests(8) == 1);
    assert(sol.numTests(9) == 1);
    assert(sol.numTests(10) == 1);
    assert(sol.numTests(11) == 1);
    assert(sol.numTests(12) == 1);
    assert(sol.numTests(13) == 1);
    assert(sol.numTests(14) == 1);
    assert(sol.numTests(15) == 1);
    assert(sol.numTests(16) == 1);
    assert(sol.numTests(17) == 1);
    assert(sol.numTests(18) == 1);
    assert(sol.numTests(19) == 1);
    assert(sol.numTests(20) == 1);
    assert(sol.numTests(21) == 1);
    assert(sol.numTests(22) == 1);
    assert(sol.numTests(23) == 1);
    assert(sol.numTests(24) == 1);
    assert(sol.numTests(25) == 1);
    assert(sol.numTests(26) == 1);
    assert(sol.numTests(27) == 1);
    assert(sol.numTests(28) == 1);
    assert(sol.numTests(29) == 1);
    assert(sol.numTests(30) == 1);
    assert(sol.numTests(31) == 1);
    assert(sol.numTests(32) == 1);
    assert(sol.numTests(33) == 1);
    assert(sol.numTests(34) == 1);
    assert(sol.numTests(35) == 1);
    assert(sol.numTests(36) == 1);
    assert(sol.numTests(37) == 1);
    assert(sol.numTests(38) == 1);
    assert(sol.numTests(39) == 1);
    assert(sol.numTests(40) == 1);
    assert(sol.numTests(41) == 1);
    assert(sol.numTests(42) == 1);
    assert(sol.numTests(43) == 1);
    assert(sol.numTests(44) == 1);
    assert(sol.numTests(45) == 1);
    assert(sol.numTests(46) == 1);
    assert(sol.numTests(47) == 1);
    assert(sol.numTests(48) == 1);
    assert(sol.numTests(49) == 1);
    assert(sol