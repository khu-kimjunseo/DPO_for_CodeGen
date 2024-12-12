### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::tuple<std::string, bool> reverse_delete(std::string s, std::string c) {
    s.erase(std::remove_if(s.begin(), s.end(), [&c](char x) { return c.find(x) != std::string::npos; }), s.end());
    return {s, s == std::string(s.rbegin(), s.rend())};
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
    public static Pair<String, Boolean> reverseDelete(String s, String c) {
        s = s.chars().filter(ch -> c.indexOf(ch) == -1).mapToObj(Character::toString).collect(Collectors.joining());
        return Pair.with(s, new StringBuilder(s).reverse().toString().equals(s));
    }
    

}

