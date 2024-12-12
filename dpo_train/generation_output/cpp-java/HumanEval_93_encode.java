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
        return encode(message.toLowerCase());
    }
    public static String decode(String message) {
        return decode(message.toLowerCase());
    }
    public static String encode(String message, String vowels) {
        return encode(message.toLowerCase(), vowels);
    }
    public static String decode(String message, String vowels) {
        return decode(message.toLowerCase(), vowels);
    }
    public static String encode(String message, String vowels, String vowels_replace) {
        return encode(message.toLowerCase(), vowels, vowels_replace);
    }
    public static String decode(String message, String vowels, String vowels_replace) {
        return decode(message.toLowerCase(), vowels, vowels_replace);
    }
    public static String encode(String message, String vowels, String vowels_replace, String vowels_replace_replace) {
        return encode(message.toLowerCase(), vowels, vowels_replace, vowels_replace_replace);
    }
    public static String decode(String message, String vowels, String vowels_replace, String vowels_replace_replace) {
        return decode(message.toLowerCase(), vowels, vowels_replace, vowels_replace_replace);
    }
    public static String encode(String message, String vowels, String vowels_replace, String vowels_replace_replace, String vowels_replace_replace_replace) {
        return encode(message.toLowerCase(), vowels, vowels_replace, vowels_replace_replace, vowels_replace_replace_replace);
    }
    public static String decode(String message, String vowels, String vowels_replace, String vowels_replace_replace, String vowels_replace_replace_replace) {
        return decode(message.toLowerCase(), vowels, vowels_replace, vowels_replace_replace, vowels_replace_replace_replace);
    }
    public static String encode(String message, String vowels, String vowels_replace, String vowels_replace_replace, String vowels_replace_replace_replace, String vowels_replace_replace_replace_replace) {
        return encode(message.toLowerCase(), vowels, vowels_replace, vowels_replace_replace, vowels_replace_replace_replace, vowels_replace_replace_replace_replace);
    }
    public static String decode(String message, String vowels, String vowels_replace, String vowels_replace_replace, String vowels_replace_replace_replace, String vowels_replace_replace_replace_replace) {
        return decode(message.toLowerCase(), vowels, vowels_replace, vowels_replace_replace, vowels_replace_replace_replace, vowels_replace_replace_replace_replace);
    }
    public static String encode(String message, String vowels, String vowels_replace, String vowels_replace_replace, String vowels_replace_replace