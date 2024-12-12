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
        String vowels = "aeiouAEIOU";
        for (int i = word.length() - 2; i > 0; i--) {
            if (vowels.indexOf(word.charAt(i)) != -1) {
                if (vowels.indexOf(word.charAt(i + 1)) == -1 && vowels.indexOf(word.charAt(i - 1)) == -1) {
                    return word.charAt(i) + "";
                }
            }
        }
        return "";
    }
    
    

}

