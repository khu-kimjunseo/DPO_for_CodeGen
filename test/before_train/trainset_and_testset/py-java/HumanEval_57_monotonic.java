import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean monotonic(ArrayList<Long> l) {
        return monotonic(l.toArray());
    }
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