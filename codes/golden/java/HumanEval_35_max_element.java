import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long maxElement(ArrayList<Long> l) {
        long m = l.get(0);
        for (long e : l) {
            m = Math.max(m, e);
        }
        return m;
    }
    public static void main(String[] args) {
    assert(maxElement((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l)))) == (3l));
    assert(maxElement((new ArrayList<Long>(Arrays.asList((long)5l, (long)3l, (long)-5l, (long)2l, (long)-3l, (long)3l, (long)9l, (long)0l, (long)124l, (long)1l, (long)-10l)))) == (124l));
    }

}
