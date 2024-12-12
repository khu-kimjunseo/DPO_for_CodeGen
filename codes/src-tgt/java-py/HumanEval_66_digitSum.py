### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long digitSum(String s) {
        if (s.equals("")) return 0;
        return s.chars().filter(Character::isUpperCase).sum();
    }
    
    

}


### Python version

def digitSum(s: str) -> int:
    if s == "": return 0
    return sum(ord(char) if char.isupper() else 0 for char in s)
