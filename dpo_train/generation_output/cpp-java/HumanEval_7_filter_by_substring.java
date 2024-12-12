### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
  std::vector<std::string> result;
  for (auto x : strings) {
    if (x.find(substring) != std::string::npos) {
      result.push_back(x);
    }
  }
  return result;
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
    public static ArrayList<String> filterBySubstring(ArrayList<String> strings, String substring) {
        ArrayList<String> result = new ArrayList<>();
        for (String s : strings) {
            if (s.find(substring) != std::string::npos) {
                result.add(s);
            }
        }
        return result;
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
        strings.add("A");
        strings.add("B");
        strings.add("C");
        strings.add("D");
        strings.add("E");
        strings.add("F");
        strings.