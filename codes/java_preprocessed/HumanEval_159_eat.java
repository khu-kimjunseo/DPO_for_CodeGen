import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> eat(long number, long need, long remaining) {
        return (need <= remaining) ? new ArrayList<Long>(Arrays.asList(number + need, remaining - need)) : new ArrayList<Long>(Arrays.asList(number + remaining, 0L));
    }
    

}