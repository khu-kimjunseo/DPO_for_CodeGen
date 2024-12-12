### Python version

from typing import List


def all_prefixes(string: str) -> List[str]:
    result = []

    for i in range(len(string)):
        result.append(string[:i+1])
    return result

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
        for (int i = 0; i < string.length(); i++) {
            if (string.charAt(i) == '*') {
                result.add(string.substring(0, i));
            }
        }
        return result;
    }
}

class Solution {
    public static void main(String[] args) {
        String s = "*";
        System.out.println(Problem.allPrefixes(s));
    }
}
