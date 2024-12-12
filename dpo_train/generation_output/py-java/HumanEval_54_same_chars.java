### Python version

def same_chars(s0: str, s1: str) -> bool:
    return set(s0) == set(s1)

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean sameChars(String s0, String s1) {
        return s0.equals(s1);
    }
}

class Solution {
    public static void main(String[] args) {
        String s0 = "abcdefghijklmnopqrstuvwxyz";
        String s1 = "abcdefghijklmnopqrstuvwxyz";
        System.out.println(Problem.sameChars(s0, s1));
    }
}
