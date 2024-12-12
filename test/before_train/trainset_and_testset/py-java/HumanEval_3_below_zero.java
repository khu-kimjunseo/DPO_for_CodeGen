import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean belowZero(ArrayList<Long> operations) {
        return below_zero(operations.toArray());
    }
    public static void main(String[] args) {
    assert(belowZero((new ArrayList<Long>(Arrays.asList()))) == (false));
    assert(belowZero((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)-3l, (long)1l, (long)2l, (long)-3l)))) == (false));
    assert(belowZero((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)-4l, (long)5l, (long)6l)))) == (true));
    assert(belowZero((new ArrayList<Long>(Arrays.asList((long)1l, (long)-1l, (long)2l, (long)-2l, (long)5l, (long)-5l, (long)4l, (long)-4l)))) == (false));
    assert(belowZero((new ArrayList<Long>(Arrays.asList((long)1l, (long)-1l, (long)2l, (long)-2l, (long)5l, (long)-5l, (long)4l, (long)-5l)))) == (true));
    assert(belowZero((new ArrayList<Long>(Arrays.asList((long)1l, (long)-2l, (long)2l, (long)-2l, (long)5l, (long)-5l, (long)4l, (long)-4l)))) == (true));
    }

}