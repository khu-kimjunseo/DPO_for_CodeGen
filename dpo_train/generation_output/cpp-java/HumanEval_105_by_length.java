### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<std::string> by_length(std::vector<long> arr) {
    std::map<long, std::string> dic = {
        {1, "One"},
        {2, "Two"},
        {3, "Three"},
        {4, "Four"},
        {5, "Five"},
        {6, "Six"},
        {7, "Seven"},
        {8, "Eight"},
        {9, "Nine"}
    };
    std::sort(arr.begin(), arr.end(), std::greater<long>());
    std::vector<std::string> new_arr;
    for (auto var: arr) {
        if (dic.count(var)) {
            new_arr.push_back(dic[var]);
        }
    }
    return new_arr;
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
    public static ArrayList<String> byLength(ArrayList<Long> arr) {
        ArrayList<String> new_arr = new ArrayList<>();
        for (long i : arr) {
            new_arr.add(String.valueOf(i));
        }
        return new_arr;
    }
}

class Solution {
    public static void main(String[] args) {
        ArrayList<String> arr = byLength(new ArrayList<>());
        System.out.println(arr);
    }
}

class Solution2 {
    public static void main(String[] args) {
        ArrayList<String> arr = byLength(new ArrayList<>());
        System.out.println(arr);
    }
}

class Solution3 {
    public static void main(String[] args) {
        ArrayList<String> arr = byLength(new ArrayList<>());
        System.out.println(arr);
    }
}

class Solution4 {
    public static void main(String[] args) {
        ArrayList<String> arr = byLength(new ArrayList<>());
        System.out.println(arr);
    }
}

class Solution5 {
    public static void main(String[] args) {
        ArrayList<String> arr = byLength(new ArrayList<>());
        System.out.println(arr);
    }
}

class Solution6 {
    public static void main(String[] args) {
        ArrayList<String> arr = byLength(new ArrayList<>());
        System.out.println(arr);
    }
}

class Solution7 {
    public static void main(String[] args) {
        ArrayList<String> arr = byLength(new ArrayList<>());
        System.out.println(arr);
    }
}

class Solution8 {
    public static void main(String[] args) {
        ArrayList<String> arr = byLength(new ArrayList<>());
        System.out.println(arr);
    }
}

class Solution9 {
    public static void main(String[] args) {
        ArrayList<String> arr = byLength(new ArrayList<>());
        System.out.println(arr);
    }
}

class Solution10 {
    public static void main(String[] args) {
        ArrayList<String> arr = byLength(new ArrayList<>());
        System.out.println(arr);
    }
}

class Solution11 {
    public static void main(String[] args) {
        ArrayList<String> arr = byLength(new ArrayList<>());
        System.out.println(arr);
    }
}

class Solution12 {
    public static void main(String[] args) {
        ArrayList<String> arr = byLength(new ArrayList<>());
        System.out.println(arr);
    }
}

class Solution13 {
    public static void main