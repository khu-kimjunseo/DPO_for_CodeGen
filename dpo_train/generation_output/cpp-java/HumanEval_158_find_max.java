### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string find_max(std::vector<std::string> words) {
    std::sort(words.begin(), words.end(), [](std::string a, std::string b) {
        return std::make_pair(-std::set<char>(a.begin(), a.end()).size(), a) < std::make_pair(-std::set<char>(b.begin(), b.end()).size(), b);
    });
    return words[0];
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
    public static String findMax(ArrayList<String> words) {
        String max = "";
        for (int i = 0; i < words.size(); i++) {
            if (words.get(i).length() > max.length()) {
                max = words.get(i);
            }
        }
        return max;
    }
}

class Solution {
    public static void main(String[] args) {
        ArrayList<String> words = new ArrayList<>();
        words.add("a");
        words.add("b");
        words.add("c");
        words.add("d");
        words.add("e");
        words.add("f");
        words.add("g");
        words.add("h");
        words.add("i");
        words.add("j");
        words.add("k");
        words.add("l");
        words.add("m");
        words.add("n");
        words.add("o");
        words.add("p");
        words.add("q");
        words.add("r");
        words.add("s");
        words.add("t");
        words.add("u");
        words.add("v");
        words.add("w");
        words.add("x");
        words.add("y");
        words.add("z");
        words.add("A");
        words.add("B");
        words.add("C");
        words.add("D");
        words.add("E");
        words.add("F");
        words.add("G");
        words.add("H");
        words.add("I");
        words.add("J");
        words.add("K");
        words.add("L");
        words.add("M");
        words.add("N");
        words.add("O");
        words.add("P");
        words.add("Q");
        words.add("R");
        words.add("S");
        words.add("T");
        words.add("U");
        words.add("V");
        words.add("W");
        words.add("X");
        words.add("Y");
        words.add("Z");
        words.add("A");
        words.add("B");
        words.add("C");
        words.add("D");
        words.add("E");
        words.add("F");
        words.add("G");
        words.add("H");
        words.add("I");
        words.add("J");
        words.add("K");
        words.add("L");
        words.add("M");
        words.add("N");
        words.add("O");
        words.add("P");
        words.add("Q");
        words.add("R");
        words.add("S");
        words.add("T");
        words.add("U");
        words.add("V");
        words.add("W");
        words.add("X");
        words.add("Y");
        words.add("Z");
        words.add("A");
        words.add("B");
        words.add("C");
        words.add("D");
        words.add("E");
        words.add("F");