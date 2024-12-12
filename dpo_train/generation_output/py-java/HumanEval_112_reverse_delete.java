### Python version

from typing import Tuple

def reverse_delete(s: str,c: str) -> Tuple[str, bool]:
    s = ''.join([char for char in s if char not in c])
    return (s,s[::-1] == s)

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
        return Pair.of(reverse_delete(s,c),true);
    }
}

class Solution {
    public static void main(String[] args) {
        String s = "abc";
        String c = "def";
        Solution.reverseDelete(s,c);
        System.out.println(s);
        System.out.println(c);
    }
}
