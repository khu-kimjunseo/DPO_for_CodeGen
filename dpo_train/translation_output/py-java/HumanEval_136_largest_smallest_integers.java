import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(ArrayList<Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(List<Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(Tuple<Long, Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(java.util.Map<Long, Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(java.util.Set<Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(java.util.HashMap<Long, Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(java.util.HashSet<Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(java.util.Hashtable<Long, Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(java.util.HashSet<Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(java.util.Map<Long, Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(java.util.Set<Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(java.util.HashMap<Long, Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(java.util.HashSet<Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(java.util.Hashtable<Long, Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(java.util.HashSet<Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(java.util.Map<Long, Long> lst) {
        return largest_smallest_integers(lst);
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(java.util.Set<Long> lst) {
        return largest_smallest_integers(lst);
    }

    public static void main(String[] args) {
    assert(largestSmallestIntegers((new ArrayList<Long>(Arrays.asList((long)2l, (long)4l, (long)1l, (long)3l, (long)5l, (long)7l)))).equals(Pair.with(Optional.of(Optional.empty()), Optional.of(1l))));
    assert(largestSmallestIntegers((new ArrayList<Long>(Arrays.asList((long)2l, (long)4l, (long)1l, (long)3l, (long)5l, (long)7l, (long)0l)))).equals(Pair.with(Optional.of(Optional.empty()), Optional.of(1l))));
    assert(largestSmallestIntegers((new ArrayList<Long>(Arrays.asList((long)1l, (long)3l, (long)2l, (long)4l, (long)5l, (long)6l, (long)-2l)))).equals(Optional.of(Pair.with(-2l, 1l))));
    assert(largestSmallestIntegers((new ArrayList<Long>(Arrays.asList((long)4l, (long)5l, (long)3l, (long)6l, (long)2l, (long)7l, (long)-7l)))).equals(Optional.of(Pair.with(-7l, 2l))));
    assert(largestSmallestIntegers((new ArrayList<Long>(Arrays.asList((long)7l, (long)3l, (long)8l, (long)4l, (long)9l, (long)2l, (long)5l, (long)-9l)))).equals(Optional.of(Pair.with(-9l, 2l))));
    assert(largestSmallestIntegers((new ArrayList<Long>(Arrays.asList()))).equals(Pair.with(Optional.of(Optional.empty()), Optional.of(Optional.empty()))));
    assert(largestSmallestIntegers((new ArrayList<Long>(Arrays.asList((long)0l)))).equals(Pair.with(Optional.of(Optional.empty()), Optional.of(Optional.empty()))));
    assert(largestSmallestIntegers((new ArrayList<Long>(Arrays.asList((long)-1l, (long)-3l, (long)-5l, (long)-6l)))).equals(Pair.with(Optional.of(-1l), Optional.of(Optional.empty()))));
    assert(largestSmallestIntegers((new ArrayList<Long>(Arrays.asList((long)-1l, (long)-3l, (long)-5l, (long)-6l, (long)0l)))).equals(Pair.with(Optional.of(-1l), Optional.of(Optional.empty()))));
    assert(largestSmallestIntegers((new ArrayList<Long>(Arrays.asList((long)-6l, (long)-4l, (long)-4l, (long)-3l, (long)1l)))).equals(Optional.of(Pair.with(-3l, 1l))));
    assert(largestSmallestIntegers((new ArrayList<Long>(Arrays.asList((long)-6l, (long)-4l, (long)-4l, (long)-3l, (long)-100l, (long)1l)))).equals(Optional.of(Pair.with(-3l, 1l))));
    }

}
