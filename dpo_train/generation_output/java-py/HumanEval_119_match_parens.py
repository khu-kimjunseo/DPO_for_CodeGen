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
    return check(lst.get(0) + lst.get(1)) || check(lst.get(1) + lst.get(0)) ? "Yes" : "No";

def check(s: str) -> str:
    if (s.charAt(0) == '(') {
        return check(s.substring(1)) || check(s.substring(1)) ? "Yes" : "No";
    } else {
        return check(s.substring(0)) || check(s.substring(0)) ? "Yes" : "No";
    }

### Java version

import java.util.regex.Pattern;
import java.util.regex.Matcher;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
import java.util.regex.Pattern;
