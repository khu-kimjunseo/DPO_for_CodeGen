import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long fruitDistribution(String s, long n) {
        long sum = 0;
        for (String i : s.split(" ")) {
            if (i.matches("\\d+")) {
                sum += Long.parseLong(i);
            }
        }
        return n - sum;
    }
    

}