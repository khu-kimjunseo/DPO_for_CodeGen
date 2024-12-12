import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> filterByPrefix(ArrayList<String> strings, String prefix) {
        return (ArrayList<String>)strings.stream().filter(s -> s.startsWith(prefix)).collect(Collectors.toList());
    }
    

}
