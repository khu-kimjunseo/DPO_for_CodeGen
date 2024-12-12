### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long is_bored(std::string S) {
    std::regex r("[.?!]\\s*");
    std::vector<std::string> sentences(std::sregex_token_iterator(S.begin(), S.end(), r, -1), std::sregex_token_iterator());
    long res = 0;
    for (auto sentence : sentences) {
        res += sentence.substr(0, 2) == "I ";
    }
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
    public static long isBored(String S) {
        long res = 0;
        for (int i = 0; i < S.length(); i++) {
            if (S.charAt(i) == '.') {
                res += is_bored(S.substring(0, i));
            }
        }
        return res;
    }
}

class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        long res = Problem.isBored(s);
        System.out.println(res);
    }
}
