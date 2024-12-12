### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string encode(std::string message) {
    std::string vowels = "aeiouAEIOU";
    std::map<char, char> vowels_replace;
    for (char i : vowels) {
        vowels_replace[i] = i + 2;
    }
    std::transform(message.begin(), message.end(), message.begin(), [](char c) {
        return std::isupper(c) ? std::tolower(c) : std::toupper(c);
    });
    std::string result = "";
    for (char i : message) {
        if (vowels_replace.count(i)) {
            result += vowels_replace[i];
        } else {
            result += i;
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
    public static String encode(String message) {
        String vowels = "aeiouAEIOU";
        Map<Character, Character> vowels_replace = new HashMap<>();
        for (char i : vowels.toCharArray()) {
            vowels_replace.put(i, (char)(i + 2));
        }
        message = swapCase(message);
        StringBuilder sb = new StringBuilder();
        for (char i : message.toCharArray()) {
            sb.append(vowels_replace.containsKey(i) ? vowels_replace.get(i) : i);
        }
        return sb.toString();
    }
    public static String swapCase(String str) {
        StringBuilder sb = new StringBuilder();
        for (char i : str.toCharArray()) {
            sb.append(Character.isUpperCase(i) ? Character.toLowerCase(i) : Character.toUpperCase(i));
        }
        return sb.toString();
    }
    
    

}

