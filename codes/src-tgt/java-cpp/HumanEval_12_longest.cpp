### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Optional<String> longest(ArrayList<String> strings) {
        if (strings.isEmpty()) {
            return Optional.empty();
        }

        String longest = strings.get(0);
        for (String s : strings) {
            if (s.length() > longest.length()) {
                longest = s;
            }
        }
        return Optional.of(longest);
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
std::optional<std::string> longest(std::vector<std::string> strings) {
    if (strings.empty()) {
        return std::nullopt;
    }
    auto it = std::max_element(strings.begin(), strings.end(), [](const std::string& a, const std::string& b) {
        return a.size() < b.size();
    });
    return *it;
}

