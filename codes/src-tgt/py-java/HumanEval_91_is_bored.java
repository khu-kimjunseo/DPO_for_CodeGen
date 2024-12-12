### Python version

def is_bored(S: str) -> int:
    import re
    sentences = re.split(r'[.?!]\s*', S)
    return sum(sentence[0:2] == 'I ' for sentence in sentences)

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long isBored(String S) {
        String[] sentences = S.split("[.?!]\\s*");
        return Arrays.stream(sentences).filter(s -> s.startsWith("I ")).count();
    }
    
    

}

