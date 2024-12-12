import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> filterBySubstring(ArrayList<String> strings, String substring) {
        return strings.stream().filter(x -> x.contains(substring)).collect(Collectors.toCollection(ArrayList::new));
    }
    

}
