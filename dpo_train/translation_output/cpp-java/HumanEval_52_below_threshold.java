import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean belowThreshold(ArrayList<Long> l, long t) {
        return l.stream().filter(l1 -> below_threshold(l1, t)).findAny().isPresent();
    }
    public static void main(String[] args) {
    assert(belowThreshold((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)4l, (long)10l))), (100l)) == (true));
    assert(belowThreshold((new ArrayList<Long>(Arrays.asList((long)1l, (long)20l, (long)4l, (long)10l))), (5l)) == (false));
    assert(belowThreshold((new ArrayList<Long>(Arrays.asList((long)1l, (long)20l, (long)4l, (long)10l))), (21l)) == (true));
    assert(belowThreshold((new ArrayList<Long>(Arrays.asList((long)1l, (long)20l, (long)4l, (long)10l))), (22l)) == (true));
    assert(belowThreshold((new ArrayList<Long>(Arrays.asList((long)1l, (long)8l, (long)4l, (long)10l))), (11l)) == (true));
    assert(belowThreshold((new ArrayList<Long>(Arrays.asList((long)1l, (long)8l, (long)4l, (long)10l))), (10l)) == (false));
    }

}
