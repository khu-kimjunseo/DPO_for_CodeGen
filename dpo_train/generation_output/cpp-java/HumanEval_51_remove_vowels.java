### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string remove_vowels(std::string text) {
    std::string res;
    for (char c : text) {
        if (std::string("aeiouAEIOU").find(c) == std::string::npos) {
            res += c;
        }
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
    public static String removeVowels(String text) {
        return text.replaceAll("[^aeiouAEIOU]", "");
    }
}

class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String text = in.nextLine();
        String result = Problem.removeVowels(text);
        System.out.println(result);
    }
}
