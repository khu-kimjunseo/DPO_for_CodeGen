### Python version

def flip_case(string: str) -> str:
    return string.swapcase()

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String flipCase(String string) {
        return Stream.of(string.split(""))
            .map(s -> s.equals(s.toUpperCase()) ? s.toLowerCase() : s.toUpperCase())
            .collect(Collectors.joining(""));
    }
    

}

