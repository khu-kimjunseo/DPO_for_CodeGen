### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> selectWords(String s, long n) {
        ArrayList<String> result = new ArrayList<String>();
        for (String word : s.split(" ")) {
            long n_consonants = 0;
            for (int i = 0; i < word.length(); i++) {
                if (!"aeiouAEIOU".contains(String.valueOf(word.charAt(i)))) {
                    n_consonants++;
                }
            }
            if (n_consonants == n) {
                result.add(word);
            }
        }
        return result;
    }
    

}


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
std::vector<std::string> select_words(std::string s, long n) {
    std::vector<std::string> result;
    std::stringstream ss(s);
    std::string word;
    while (ss >> word) {
        long n_consonants = 0;
        for (char c : word) {
            if (std::string("aeiouAEIOU").find(c) == std::string::npos) {
                n_consonants++;
            }
        }
        if (n_consonants == n) {
            result.push_back(word);
        }
    }
    return result;
}

