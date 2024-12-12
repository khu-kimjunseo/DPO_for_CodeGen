### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long vowels_count(std::string s) {
    std::string vowels = "aeiouAEIOU";
    long n_vowels = std::count_if(s.begin(), s.end(), [&](char c){return vowels.find(c) != std::string::npos;});
    if (s.back() == 'y' || s.back() == 'Y') {
        n_vowels += 1;
    }
    return n_vowels;
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
    public static long vowelsCount(String s) {
        String vowels = "aeiouAEIOU";
        long nVowels = s.chars().filter(c -> vowels.indexOf(c) != -1).count();
        if (s.charAt(s.length()-1) == 'y' || s.charAt(s.length()-1) == 'Y') {
            nVowels++;
        }
        return nVowels;
    }
    

}

