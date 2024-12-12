import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean monotonic(ArrayList<Long> l) {
        return monotonic(l.toArray());
    }
    public static boolean monotonic(long[] l) {
        return monotonic(Arrays.asList(l));
    }
    public static boolean monotonic(int[] l) {
        return monotonic(Arrays.asList(l));
    }
    public static boolean monotonic(long[] l, long[] r) {
        return monotonic(Arrays.asList(l, r));
    }
    public static boolean monotonic(int[] l, int[] r) {
        return monotonic(Arrays.asList(l, r));
    }
    public static boolean monotonic(long[] l, long[] r, long[] c) {
        return monotonic(Arrays.asList(l, r, c));
    }
    public static boolean monotonic(int[] l, int[] r, int[] c) {
        return monotonic(Arrays.asList(l, r, c));
    }
    public static boolean monotonic(long[] l, long[] r, long[] c, long[] d) {
        return monotonic(Arrays.asList(l, r, c, d));
    }
    public static boolean monotonic(int[] l, int[] r, int[] c, int[] d) {
        return monotonic(Arrays.asList(l, r, c, d));
    }
    public static boolean monotonic(long[] l, long[] r, long[] c, long[] d, long[] e) {
        return monotonic(Arrays.asList(l, r, c, d, e));
    }
    public static boolean monotonic(int[] l, int[] r, int[] c, int[] d, int[] e) {
        return monotonic(Arrays.asList(l, r, c, d, e));
    }
    public static boolean monotonic(long[] l, long[] r, long[] c, long[] d, long[] e, long[] f) {
        return monotonic(Arrays.asList(l, r, c, d, e, f));
    }
    public static boolean monotonic(int[] l, int[] r, int[] c, int[] d, int[] e, int[] f) {
        return monotonic(Arrays.asList(l, r, c, d, e, f));
    }
    public static boolean monotonic(long[] l, long[] r, long[] c, long[] d, long[] e, long[] f, long[] g) {
        return monotonic(Arrays.asList(l, r, c, d, e, f, g));
    }
    public static boolean monotonic(int[] l, int[] r, int[] c, int[] d, int[] e, int[] f, int[] g) {
        return monotonic(Arrays.asList(l, r, c, d, e, f, g));
    }
    public static boolean monotonic(long[] l, long[] r, long[] c, long[] d, long[] e, long[] f, long[] g, long[] h) {
        return monotonic(Arrays.asList(l, r, c, d, e, f, g, h));
    }
    public static boolean monotonic(int[] l, int[] r, int[] c, int[] d,
    public static void main(String[] args) {
    assert(monotonic((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)4l, (long)10l)))) == (true));
    assert(monotonic((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)4l, (long)20l)))) == (true));
    assert(monotonic((new ArrayList<Long>(Arrays.asList((long)1l, (long)20l, (long)4l, (long)10l)))) == (false));
    assert(monotonic((new ArrayList<Long>(Arrays.asList((long)4l, (long)1l, (long)0l, (long)-10l)))) == (true));
    assert(monotonic((new ArrayList<Long>(Arrays.asList((long)4l, (long)1l, (long)1l, (long)0l)))) == (true));
    assert(monotonic((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l, (long)2l, (long)5l, (long)60l)))) == (false));
    assert(monotonic((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l, (long)4l, (long)5l, (long)60l)))) == (true));
    assert(monotonic((new ArrayList<Long>(Arrays.asList((long)9l, (long)9l, (long)9l, (long)9l)))) == (true));
    }

}
