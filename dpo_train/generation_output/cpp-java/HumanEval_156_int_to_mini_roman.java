### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string int_to_mini_roman(long number) {
    std::vector<long> num = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    std::vector<std::string> sym = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    int i = 12;
    std::string res = "";
    while (number) {
        long div = number / num[i];
        number %= num[i];
        while (div) {
            res += sym[i];
            div -= 1;
        }
        i -= 1;
    }
    std::transform(res.begin(), res.end(), res.begin(), ::tolower);
    return res;
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
    public static String intToMiniRoman(long number) {
        StringBuilder sb = new StringBuilder();
        sb.append(int_to_mini_roman(number));
        return sb.toString();
    }
}

class Solution {
    public static void main(String[] args) {
        long number = Long.parseLong(args[0]);
        System.out.println(Problem.intToMiniRoman(number));
    }
}
