### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String matchParens(ArrayList<String> lst) {
        return check(lst.get(0) + lst.get(1)) || check(lst.get(1) + lst.get(0)) ? "Yes" : "No";
    }
    public static boolean check(String s) {
        int val = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '(') {
                val++;
            } else {
                val--;
            }
            if (val < 0) {
                return false;
            }
        }
        return val == 0 ? true : false;
    }
    
    

}


### Python version

from typing import List

def match_parens(lst: List[str]) -> str:
    def check(s):
        val = 0
        for i in s:
            if i == '(':
                val = val + 1
            else:
                val = val - 1
            if val < 0:
                return False
        return True if val == 0 else False

    S1 = lst[0] + lst[1]
    S2 = lst[1] + lst[0]
    return 'Yes' if check(S1) or check(S2) else 'No'
