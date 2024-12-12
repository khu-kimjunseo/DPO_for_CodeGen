import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long addElements(ArrayList<Long> arr, long k) {
        return arr.stream().limit(k).filter(i -> i.toString().length() <= 2).mapToLong(i -> i).sum();
    }
    
    

}
