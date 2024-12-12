import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long fizzBuzz(long n) {
        List<Long> ns = new ArrayList<>();
        for (long i = 0; i < n; i++) {
            if (i % 11 == 0 || i % 13 == 0) {
                ns.add(i);
            }
        }
        long s = ns.stream().map(i -> String.valueOf(i)).flatMapToInt(String::chars).filter(c -> c == '7').count();
        return s;
    }
    
    

}
