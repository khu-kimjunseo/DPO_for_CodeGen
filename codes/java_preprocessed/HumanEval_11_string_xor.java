import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String stringXor(String a, String b) {
        return IntStream.range(0, a.length()).mapToObj(i -> a.charAt(i) == b.charAt(i) ? "0" : "1").collect(Collectors.joining());
    }
    
    

}