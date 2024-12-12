### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool cycpattern_check(std::string a, std::string b) {
    int l = b.length();
    std::string pat = b + b;
    for(int i = 0; i <= a.length() - l; i++) {
        for(int j = 0; j <= l; j++) {
            if(a.substr(i, l) == pat.substr(j, l)) {
                return true;
            }
        }
    }
    return false;
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
    public static boolean cycpatternCheck(String a, String b) {
        return cycpattern_check(a, b);
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String a = in.next();
        String b = in.next();
        System.out.println(Problem.cycpatternCheck(a, b));
    }
}

class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String a = in.next();
        String b = in.next();
        System.out.println(Problem.cycpatternCheck(a, b));
    }
}

class Solution2 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String a = in.next();
        String b = in.next();
        System.out.println(Problem.cycpatternCheck(a, b));
    }
}

class Solution3 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String a = in.next();
        String b = in.next();
        System.out.println(Problem.cycpatternCheck(a, b));
    }
}

class Solution4 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String a = in.next();
        String b = in.next();
        System.out.println(Problem.cycpatternCheck(a, b));
    }
}

class Solution5 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String a = in.next();
        String b = in.next();
        System.out.println(Problem.cycpatternCheck(a, b));
    }
}

class Solution6 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String a = in.next();
        String b = in.next();
        System.out.println(Problem.cycpatternCheck(a, b));
    }
}

class Solution7 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String a = in.next();
        String b = in.next();
        System.out.println(Problem.cycpatternCheck(a, b));
    }
}

class Solution8 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String a = in.next();
        String b = in.next();
        System.out.println(Problem.cycpatternCheck(a, b));
    }
}

class Solution9 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String a = in.next();
        String b = in.next();
        System.out.println(Problem.cycpatternCheck(a, b));
    }
}

class Solution10 {
    public static void main(String