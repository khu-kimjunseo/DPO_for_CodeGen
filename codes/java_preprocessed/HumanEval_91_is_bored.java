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
