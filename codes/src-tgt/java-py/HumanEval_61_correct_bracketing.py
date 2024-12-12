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
        int depth = 0;
        for (char b : brackets.toCharArray()) {
            if (b == '(') {
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
    

}


### Python version

def correct_bracketing(brackets: str) -> bool:
    depth = 0
    for b in brackets:
        if b == "(":
            depth += 1
        else:
            depth -= 1
        if depth < 0:
            return False
    return depth == 0
