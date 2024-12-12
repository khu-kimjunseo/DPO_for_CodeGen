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
std::vector<std::string> words_string(std::string s) {
    std::vector<std::string> result;
    std::replace(s.begin(), s.end(), ',', ' ');
    std::stringstream ss(s);
    std::string word;
    while (ss >> word) {
        result.push_back(word);
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
    public static ArrayList<String> wordsString(String s) {
        ArrayList<String> result = new ArrayList<>();
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (Character.isLetter(c)) {
                result.add(c);
            }
        }
        return result;
    }
    public static ArrayList<String> wordsString(String s, int n) {
        ArrayList<String> result = new ArrayList<>();
        for (int i = 0; i < s.length(); i += n) {
            char c = s.charAt(i);
            if (Character.isLetter(c)) {
                result.add(c);
            }
        }
        return result;
    }
    public static ArrayList<String> wordsString(String s, int n, int m) {
        ArrayList<String> result = new ArrayList<>();
        for (int i = 0; i < s.length(); i += n) {
            char c = s.charAt(i);
            if (Character.isLetter(c)) {
                result.add(c);
            }
        }
        for (int i = 0; i < s.length(); i += n) {
            char c = s.charAt(i);
            if (Character.isLetter(c)) {
                result.add(c);
            }
        }
        for (int i = 0; i < s.length(); i += n) {
            char c = s.charAt(i);
            if (Character.isLetter(c)) {
                result.add(c);
            }
        }
        for (int i = 0; i < s.length(); i += n) {
            char c = s.charAt(i);
            if (Character.isLetter(c)) {
                result.add(c);
            }
        }
        for (int i = 0; i < s.length(); i += n) {
            char c = s.charAt(i);
            if (Character.isLetter(c)) {
                result.add(c);
            }
        }
        for (int i = 0; i < s.length(); i += n) {
            char c = s.charAt(i);
            if (Character.isLetter(c)) {
                result.add(c);
            }
        }
        for (int i = 0; i < s.length(); i += n) {
            char c = s.charAt(i);
            if (Character.isLetter(c)) {
                result.add(c);
            }
        }
        for (int i = 0; i < s.length(); i += n) {
            char c = s.charAt(i);
            if (Character.isLetter(c)) {
                result.add(c);
            }
        }
        for (int i = 0; i < s.length(); i += n) {
            char c = s.charAt(i);
            if (Character.isLetter(c)) {
                result.add(c);
            }
        }
        for (int i = 0; i < s.length(); i += n) {
            char c = s.charAt(i);
