import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> filterIntegers(ArrayList<Object> values) {
        return values.stream().filter(x -> x instanceof Long).map(x -> (Long) x).collect(Collectors.toCollection(ArrayList::new));
    }
    

}
