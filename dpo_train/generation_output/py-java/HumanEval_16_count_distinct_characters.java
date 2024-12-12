### Python version

def count_distinct_characters(string: str) -> int:
    return len(set(string.lower()))

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long countDistinctCharacters(String string) {
        return count_distinct_characters(string.toLowerCase());
    }
}

class Solution {
    public static void main(String[] args) {
        String s = "abcdefghijklmnopqrstuvwxyz";
        System.out.println(Problem.countDistinctCharacters(s));
    }
}
