import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Optional<Long> nextSmallest(ArrayList<Long> lst) {
        return next_smallest(lst);
    }
    public static Optional<Long> nextSmallest(ArrayList<Long> lst, long min) {
        return next_smallest(lst);
    }
    public static Optional<Long> nextSmallest(ArrayList<Long> lst, long min, long max) {
        return next_smallest(lst);
    }
    public static Optional<Long> nextSmallest(ArrayList<Long> lst, long min, long max, long min2) {
        return next_smallest(lst);
    }
    public static Optional<Long> nextSmallest(ArrayList<Long> lst, long min, long max, long min2, long max2) {
        return next_smallest(lst);
    }
    public static Optional<Long> nextSmallest(ArrayList<Long> lst, long min, long max, long min2, long max2, long min3) {
        return next_smallest(lst);
    }
    public static Optional<Long> nextSmallest(ArrayList<Long> lst, long min, long max, long min2, long max2, long min3, long max3) {
        return next_smallest(lst);
    }
    public static Optional<Long> nextSmallest(ArrayList<Long> lst, long min, long max, long min2, long max2, long min3, long max3, long min4) {
        return next_smallest(lst);
    }
    public static Optional<Long> nextSmallest(ArrayList<Long> lst, long min, long max, long min2, long max2, long min3, long max3, long min4, long max4) {
        return next_smallest(lst);
    }
    public static Optional<Long> nextSmallest(ArrayList<Long> lst, long min, long max, long min2, long max2, long min3, long max3, long min4, long max4, long min5) {
        return next_smallest(lst);
    }
    public static Optional<Long> nextSmallest(ArrayList<Long> lst, long min, long max, long min2, long max2, long min3, long max3, long min4, long max4, long min5, long max5) {
        return next_smallest(lst);
    }
    public static Optional<Long> nextSmallest(ArrayList<Long> lst, long min, long max, long min2, long max2, long min3, long max3, long min4, long max4, long min5, long max5, long min6) {
        return next_smallest(lst);
    }
    public static Optional<Long> nextSmallest(ArrayList<Long> lst, long min, long max, long min2, long max2, long min3, long max3, long min4, long max4, long min5, long max5, long min6, long max6) {
        return next_smallest(lst);
    }
    public static Optional<Long> nextSmallest(ArrayList<Long> lst, long min, long max, long min2, long max2, long min3, long max3, long min4, long max4, long min5, long max5, long min6,
    public static void main(String[] args) {
    assert(nextSmallest((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l, (long)4l, (long)5l)))).equals(Optional.of(2l)));
    assert(nextSmallest((new ArrayList<Long>(Arrays.asList((long)5l, (long)1l, (long)4l, (long)3l, (long)2l)))).equals(Optional.of(2l)));
    assert(nextSmallest((new ArrayList<Long>(Arrays.asList()))).equals(Optional.empty()));
    assert(nextSmallest((new ArrayList<Long>(Arrays.asList((long)1l, (long)1l)))).equals(Optional.empty()));
    assert(nextSmallest((new ArrayList<Long>(Arrays.asList((long)1l, (long)1l, (long)1l, (long)1l, (long)0l)))).equals(Optional.of(1l)));
    assert(nextSmallest((new ArrayList<Long>(Arrays.asList((long)1l, (long)1l)))).equals(Optional.empty()));
    assert(nextSmallest((new ArrayList<Long>(Arrays.asList((long)-35l, (long)34l, (long)12l, (long)-45l)))).equals(Optional.of(-35l)));
    }

}
