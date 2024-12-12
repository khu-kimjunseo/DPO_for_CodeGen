import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean sameChars(String s0, String s1) {
        return new HashSet<>(Arrays.asList(s0.split(""))).equals(new HashSet<>(Arrays.asList(s1.split(""))));
    }
    

}
