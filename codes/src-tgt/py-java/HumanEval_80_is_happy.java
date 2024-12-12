### Python version

from typing import List

def is_happy(s: str) -> bool:
    if len(s) < 3:
      return False

    for i in range(len(s) - 2):
      
      if s[i] == s[i+1] or s[i+1] == s[i+2] or s[i] == s[i+2]:
        return False
    return True

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean isHappy(String s) {
        if (s.length() < 3) return false;
        for (int i = 0; i < s.length() - 2; i++) {
            if (s.charAt(i) == s.charAt(i+1) || s.charAt(i+1) == s.charAt(i+2) || s.charAt(i) == s.charAt(i+2)) return false;
        }
        return true;
    }
    
    

}

