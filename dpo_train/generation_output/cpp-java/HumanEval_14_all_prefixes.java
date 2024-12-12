### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<std::string> all_prefixes(std::string string) {
    std::vector<std::string> result;
    for(int i=0;i<string.length();i++) {
        result.push_back(string.substr(0,i+1));
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
    public static ArrayList<String> allPrefixes(String string) {
        ArrayList<String> result = new ArrayList<>();
        for(int i=0;i<string.length();i++) {
            if(string.substring(0,i+1).equals(string.substring(i+1,string.length()))) {
                result.add(string.substring(0,i+1));
            }
        }
        return result;
    }
    public static void main(String[] args) {
        ArrayList<String> allPrefixes = Problem.allPrefixes("ab");
        for(int i=0;i<allPrefixes.size();i++) {
            System.out.println(allPrefixes.get(i));
        }
    }
}

class Solution {
    public static void main(String[] args) {
        ArrayList<String> allPrefixes = Problem.allPrefixes("ab");
        for(int i=0;i<allPrefixes.size();i++) {
            System.out.println(allPrefixes.get(i));
        }
    }
}

class Solution2 {
    public static void main(String[] args) {
        ArrayList<String> allPrefixes = Problem.allPrefixes("ab");
        for(int i=0;i<allPrefixes.size();i++) {
            System.out.println(allPrefixes.get(i));
        }
    }
}

class Solution3 {
    public static void main(String[] args) {
        ArrayList<String> allPrefixes = Problem.allPrefixes("ab");
        for(int i=0;i<allPrefixes.size();i++) {
            System.out.println(allPrefixes.get(i));
        }
    }
}

class Solution4 {
    public static void main(String[] args) {
        ArrayList<String> allPrefixes = Problem.allPrefixes("ab");
        for(int i=0;i<allPrefixes.size();i++) {
            System.out.println(allPrefixes.get(i));
        }
    }
}

class Solution5 {
    public static void main(String[] args) {
        ArrayList<String> allPrefixes = Problem.allPrefixes("ab");
        for(int i=0;i<allPrefixes.size();i++) {
            System.out.println(allPrefixes.get(i));
        }
    }
}

class Solution6 {
    public static void main(String[] args) {
        ArrayList<String> allPrefixes = Problem.allPrefixes("ab");
        for(int i=0;i<allPrefixes.size();i++) {
            System.out.println(allPrefixes.get(i));
        }
    }
}

class Solution7 {
    public static void main(String[] args) {
        ArrayList<String> allPrefixes = Problem.allPrefixes("ab");
        for(int i=0;i<allPrefixes.size();i++) {
            System.out.println(allPrefixes.get(i));
        }
    }
}

class Solution8 {
    public static void main(String[] args) {
        ArrayList<String> allPrefixes = Problem.allPref