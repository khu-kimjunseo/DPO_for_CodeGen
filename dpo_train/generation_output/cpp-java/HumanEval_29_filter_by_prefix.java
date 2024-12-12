### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> res;
    for (auto x: strings) {
        if (x.find(prefix) == 0) {
            res.push_back(x);
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
    public static ArrayList<String> filterByPrefix(ArrayList<String> strings, String prefix) {
        ArrayList<String> res = new ArrayList<>();
        for (auto x: strings) {
            if (x.find(prefix) == 0) {
                res.add(x);
            }
        }
        return res;
    }
}

class Solution {
    public static void main(String[] args) {
        ArrayList<String> strings = new ArrayList<>();
        strings.add("a");
        strings.add("b");
        strings.add("c");
        strings.add("d");
        strings.add("e");
        strings.add("f");
        strings.add("g");
        strings.add("h");
        strings.add("i");
        strings.add("j");
        strings.add("k");
        strings.add("l");
        strings.add("m");
        strings.add("n");
        strings.add("o");
        strings.add("p");
        strings.add("q");
        strings.add("r");
        strings.add("s");
        strings.add("t");
        strings.add("u");
        strings.add("v");
        strings.add("w");
        strings.add("x");
        strings.add("y");
        strings.add("z");
        strings.add("A");
        strings.add("B");
        strings.add("C");
        strings.add("D");
        strings.add("E");
        strings.add("F");
        strings.add("G");
        strings.add("H");
        strings.add("I");
        strings.add("J");
        strings.add("K");
        strings.add("L");
        strings.add("M");
        strings.add("N");
        strings.add("O");
        strings.add("P");
        strings.add("Q");
        strings.add("R");
        strings.add("S");
        strings.add("T");
        strings.add("U");
        strings.add("V");
        strings.add("W");
        strings.add("X");
        strings.add("Y");
        strings.add("Z");
        strings.add("a");
        strings.add("b");
        strings.add("c");
        strings.add("d");
        strings.add("e");
        strings.add("f");
        strings.add("g");
        strings.add("h");
        strings.add("i");
        strings.add("j");
        strings.add("k");
        strings.add("l");
        strings.add("m");
        strings.add("n");
        strings.add("o");
        strings.add("p");
        strings.add("q");
        strings.add("r");
        strings.add("s");
        strings.add("t");
        strings.add("u");
        strings.add("v");
        strings.add("w");
        strings.add("x");
        strings.add("y");
        strings.add("z");
        strings.add("A");
        strings.add("B");
        strings.add("C");
        strings.add("D");
        strings.add("E");
        strings.add("F");
        strings.add("G");
        strings.add("H");
        strings