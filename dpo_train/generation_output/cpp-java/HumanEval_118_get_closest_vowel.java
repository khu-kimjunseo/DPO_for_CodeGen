### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string get_closest_vowel(std::string word) {
    if (word.size() < 3) {
        return "";
    }

    std::set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'O', 'U', 'I'};
    for (int i = word.size() - 2; i >= 1; i--) {
        if (vowels.count(word[i])) {
            if (!vowels.count(word[i+1]) && !vowels.count(word[i-1])) {
                return std::string(1, word[i]);
            }
        }
    }
    return "";
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
    public static String getClosestVowel(String word) {
        if (word.size() < 3) {
            return "";
        }

        String closest = "";
        for (int i = 0; i < word.size() - 1; i++) {
            if (word.charAt(i) == word.charAt(i + 1)) {
                continue;
            }
            if (closest.length() > 0) {
                closest += " ";
            }
            closest += get_closest_vowel(word.substring(i, i + 2));
        }
        return closest;
    }
}

class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String word = in.nextLine();
        String closest = Problem.getClosestVowel(word);
        System.out.println(closest);
    }
}
