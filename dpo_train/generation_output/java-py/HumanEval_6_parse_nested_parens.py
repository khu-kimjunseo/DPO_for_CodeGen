### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> parseNestedParens(String paren_string) {
        ArrayList<Long> result = new ArrayList<Long>();

        for (String s : paren_string.split(" ")) {
            long depth = 0;
            long max_depth = 0;

            for (int i = 0; i < s.length(); i++) {
                char c = s.charAt(i);
                if (c == '(') {
                    depth += 1;
                    max_depth = Math.max(depth, max_depth);
                } else {
                    depth -= 1;
                }
            }

            result.add(max_depth);
        }

        return result;
    }
}

### Python version

from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    paren_string = paren_string.replace("(", "")
    paren_string = paren_string.replace(")", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.replace("}", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.replace("}", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.replace("}", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.replace("}", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.replace("}", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.replace("}", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.replace("}", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.replace("}", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.replace("}", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.replace("}", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")