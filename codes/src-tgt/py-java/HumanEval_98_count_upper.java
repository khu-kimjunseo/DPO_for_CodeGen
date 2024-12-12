### Python version

def count_upper(s: str) -> int:
    count = 0
    for i in range(0,len(s),2):
        if s[i] in "AEIOU":
            count += 1
    return count

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long countUpper(String s) {
        long count = 0;
        for (int i = 0; i < s.length(); i += 2) {
            if ("AEIOU".indexOf(s.charAt(i)) >= 0) {
                count++;
            }
        }
        return count;
    }
    

}

