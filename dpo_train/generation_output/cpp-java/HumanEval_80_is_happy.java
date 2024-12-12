### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool is_happy(std::string s) {
    if (s.size() < 3) {
      return false;
    }

    for (int i = 0; i < s.size() - 2; i++) {
      if (s[i] == s[i+1] || s[i+1] == s[i+2] || s[i] == s[i+2]) {
        return false;
      }
    }
    return true;
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
    public static boolean isHappy(String s) {
        return is_happy(s.toLowerCase());
    }
}

class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        String[] words = s.split(" ");
        String[] words2 = new String[words.length];
        for (int i = 0; i < words.length; i++) {
            words2[i] = words[i].toLowerCase();
        }
        Solution sol = new Solution();
        for (int i = 0; i < words.length; i++) {
            if (words[i].length() == 0) {
                continue;
            }
            if (words[i].length() == 1) {
                continue;
            }
            if (words[i].length() == 2) {
                continue;
            }
            if (words[i].length() == 3) {
                continue;
            }
            if (words[i].length() == 4) {
                continue;
            }
            if (words[i].length() == 5) {
                continue;
            }
            if (words[i].length() == 6) {
                continue;
            }
            if (words[i].length() == 7) {
                continue;
            }
            if (words[i].length() == 8) {
                continue;
            }
            if (words[i].length() == 9) {
                continue;
            }
            if (words[i].length() == 10) {
                continue;
            }
            if (words[i].length() == 11) {
                continue;
            }
            if (words[i].length() == 12) {
                continue;
            }
            if (words[i].length() == 13) {
                continue;
            }
            if (words[i].length() == 14) {
                continue;
            }
            if (words[i].length() == 15) {
                continue;
            }
            if (words[i].length() == 16) {
                continue;
            }
            if (words[i].length() == 17) {
                continue;
            }
            if (words[i].length() == 18) {
                continue;
            }
            if (words[i].length() == 19) {
                continue;
            }
            if (words[i].length() == 20) {
                continue;
            }
            if (words[i].length() == 21) {
                continue;
            }
            if (words[i].length() == 22) {
                continue;
            }
            if (words[i].length() == 23) {
                continue;
            }
            if (words[i].length() == 24) {
                continue;
            }
            if (words[i].length() == 25) {
                continue;
            }
            if (words[i].length() == 26) {
                continue;
            }
            if (words[i].length() == 27) {
                continue;
            }
            if (words[i].length() == 28) {
                continue;
            }
            if (words[i].length() == 29) {
                continue;
