import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long countUpper(String s) {
        long count = 0;
        for (int i = 0; i < s.length(); i += 2) {
            if ("AEIOU".indexOf(s.charAt(i)) >= 0) {
                count++;
            }
        }
        return count;
    }
    

}
