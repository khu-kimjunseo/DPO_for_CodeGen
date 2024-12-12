### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long digitSum(String s) {
        if (s.equals("")) return 0;
        return s.chars().filter(Character::isUpperCase).sum();
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
long digitSum(std::string s) {
    std::vector<std::string> v;
    std::stringstream ss(s);
    std::string s1;
    while (std::getline(ss, s1)) {
        v.push_back(s1);
    }
    std::sort(v.begin(), v.end());
    long sum = 0;
    for (std::string s : v) {
        sum += digitSum(s);
    }
    return sum;
}

int main() {
    std::string s;
    std::cin >> s;
    std::cout << "Digit sum: " << digitSum(s) << std::endl;
    return 0;
}
