import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Pair<Long, Long> evenOddCount(long num) {
        long evenCount = 0;
        long oddCount = 0;
        for (char i : Long.toString(Math.abs(num)).toCharArray()) {
            if (i % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
        return Pair.with(evenCount, oddCount);
    }
    

}
