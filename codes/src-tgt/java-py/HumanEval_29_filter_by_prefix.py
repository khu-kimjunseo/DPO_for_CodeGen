### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> filterByPrefix(ArrayList<String> strings, String prefix) {
        return (ArrayList<String>)strings.stream().filter(s -> s.startsWith(prefix)).collect(Collectors.toList());
    }
    

}


### Python version

from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [x for x in strings if x.startswith(prefix)]
