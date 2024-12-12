import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> common(ArrayList<Long> l1, ArrayList<Long> l2) {
        Set<Long> set = new HashSet<>(l1);
        set.retainAll(l2);
        ArrayList<Long> ret = new ArrayList<>(set);
        Collections.sort(ret);
        return ret;
    }
    

}
