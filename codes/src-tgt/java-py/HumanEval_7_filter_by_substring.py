### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> filterBySubstring(ArrayList<String> strings, String substring) {
        return strings.stream().filter(x -> x.contains(substring)).collect(Collectors.toCollection(ArrayList::new));
    }
    

}


### Python version

from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [x for x in strings if substring in x]
