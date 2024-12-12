### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool correct_bracketing(std::string brackets) {
    int depth = 0;
    for (char b : brackets) {
        if (b == '<') {
            depth++;
        } else {
            depth--;
        }
        if (depth < 0) {
            return false;
        }
    }
    return depth == 0;
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
    public static boolean correctBracketing(String brackets) {
        return correct_bracketing(brackets.toLowerCase());
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String brackets = in.nextLine();
        in.close();
        System.out.println(correctBracketing(brackets));
    }
}

class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String brackets = in.nextLine();
        in.close();
        System.out.println(Problem.correctBracketing(brackets));
    }
}

class Solution2 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String brackets = in.nextLine();
        in.close();
        System.out.println(Problem.correctBracketing(brackets));
    }
}

class Solution3 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String brackets = in.nextLine();
        in.close();
        System.out.println(Problem.correctBracketing(brackets));
    }
}

class Solution4 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String brackets = in.nextLine();
        in.close();
        System.out.println(Problem.correctBracketing(brackets));
    }
}

class Solution5 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String brackets = in.nextLine();
        in.close();
        System.out.println(Problem.correctBracketing(brackets));
    }
}

class Solution6 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String brackets = in.nextLine();
        in.close();
        System.out.println(Problem.correctBracketing(brackets));
    }
}

class Solution7 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String brackets = in.nextLine();
        in.close();
        System.out.println(Problem.correctBracketing(brackets));
    }
}

class Solution8 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String brackets = in.nextLine();
        in.close();
        System.out.println(Problem.correctBracketing(brackets));
    }
}

class Solution9 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String brackets = in.nextLine();
        in.close();
        System.out.println(Problem.correctBracketing(brackets));
    }
}

class Solution10 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String brackets = in.nextLine();
        in.close();
        System.out.println(Problem.correctBracketing(brackets));
    }
}

class Solution11 {
    public