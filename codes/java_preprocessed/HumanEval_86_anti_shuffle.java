import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String antiShuffle(String s) {
        return Arrays.stream(s.split(" ")).map(i -> new String(i.chars().sorted().toArray(), 0, i.length())).collect(Collectors.joining(" "));
    }
    
    

}