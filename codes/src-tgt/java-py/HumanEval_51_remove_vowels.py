### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String removeVowels(String text) {
        return text.replaceAll("(?i)[aeiou]", "");
    }
    

}


### Python version

def remove_vowels(text: str) -> str:
    return "".join([s for s in text if s.lower() not in ["a", "e", "i", "o", "u"]])
