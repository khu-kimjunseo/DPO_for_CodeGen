### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    std::string strong = extensions[0];
    int my_val = std::count_if(strong.begin(), strong.end(), [](char c){return std::isupper(c);}) - std::count_if(strong.begin(), strong.end(), [](char c){return std::islower(c);});
    for (std::string s : extensions) {
        int val = std::count_if(s.begin(), s.end(), [](char c){return std::isupper(c);}) - std::count_if(s.begin(), s.end(), [](char c){return std::islower(c);});
        if (val > my_val) {
            strong = s;
            my_val = val;
        }
    }
    std::string ans = class_name + "." + strong;
    return ans;
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
    public static String StrongestExtension(String class_name, ArrayList<String> extensions) {
        String strong = extensions.get(0);
        int myVal = extensions.get(0).replaceAll("[^A-Z]", "").length() - extensions.get(0).replaceAll("[^a-z]", "").length();
        for (String s : extensions) {
            int val = s.replaceAll("[^A-Z]", "").length() - s.replaceAll("[^a-z]", "").length();
            if (val > myVal) {
                strong = s;
                myVal = val;
            }
        }
        return class_name + "." + strong;
    }
    

}

