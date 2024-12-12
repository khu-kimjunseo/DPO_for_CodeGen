import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean monotonic(ArrayList<Long> l) {
        if (l.equals(l.stream().sorted().collect(Collectors.toList())) || l.equals(l.stream().sorted(Comparator.reverseOrder()).collect(Collectors.toList()))) {
            return true;
        }
        return false;
    }
    

}
