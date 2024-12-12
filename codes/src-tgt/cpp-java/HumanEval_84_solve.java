### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string solve(long N) {
    std::string s = std::to_string(N);
    long sum = 0;
    for (int i = 0; i < s.size(); i++) {
        sum += s[i] - '0';
    }
    std::bitset<64> b(sum);
    return b.to_string().substr(b.to_string().find('1'));
}


### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String solve(long N) {
        return Long.toBinaryString(Long.toString(N).chars().map(c -> c - '0').sum());
    }
    

}

