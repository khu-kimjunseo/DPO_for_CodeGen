import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> unique(ArrayList<Long> l) {
        return new ArrayList<Long>(new HashSet<Long>(l));
    }
    public static void main(String[] args) {
    assert(unique((new ArrayList<Long>(Arrays.asList((long)5l, (long)3l, (long)5l, (long)2l, (long)3l, (long)3l, (long)9l, (long)0l, (long)123l)))).equals((new ArrayList<Long>(Arrays.asList((long)0l, (long)2l, (long)3l, (long)5l, (long)9l, (long)123l)))));
    }

}