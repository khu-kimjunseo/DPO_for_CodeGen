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
        if (s.isEmpty()) {
            return new ArrayList<String>();
        }

        ArrayList<String> sList = new ArrayList<String>();

        for (char c : s.toCharArray()) {
            if (c == ',') {
                sList.add(" ");
            } else {
                sList.add(Character.toString(c));
            }
        }

        String joinedString = String.join("", sList);
        return new ArrayList<String>(Arrays.asList(joinedString.split("\\s+")));
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

