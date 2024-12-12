import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Optional<Long> nextSmallest(ArrayList<Long> lst) {
        return Optional.ofNullable(nextSmallest(lst.toArray()));
    }
    public static Optional<Long> nextSmallest(long[] lst) {
        return Optional.ofNullable(nextSmallest(Arrays.asList(lst)));
    }
    public static Optional<Long> nextSmallest(List<Long> lst) {
        return Optional.ofNullable(nextSmallest(lst.toArray()));
    }
    public static Optional<Long> nextSmallest(int[] lst) {
        return Optional.ofNullable(nextSmallest(Arrays.asList(lst)));
    }
    public static Optional<Long> nextSmallest(List<Integer> lst) {
        return Optional.ofNullable(nextSmallest(lst.toArray()));
    }
    public static Optional<Long> nextSmallest(long[] lst) {
        return Optional.ofNullable(nextSmallest(Arrays.asList(lst)));
    }
    public static Optional<Long> nextSmallest(int[] lst) {
        return Optional.ofNullable(nextSmallest(Arrays.asList(lst)));
    }
    public static Optional<Long> nextSmallest(List<Long> lst) {
        return Optional.ofNullable(nextSmallest(lst.toArray()));
    }
    public static Optional<Long> nextSmallest(long[] lst) {
        return Optional.ofNullable(nextSmallest(Arrays.asList(lst)));
    }
    public static Optional<Long> nextSmallest(List<Integer> lst) {
        return Optional.ofNullable(nextSmallest(lst.toArray()));
    }
    public static Optional<Long> nextSmallest(int[] lst) {
        return Optional.ofNullable(nextSmallest(Arrays.asList(lst)));
    }
    public static Optional<Long> nextSmallest(long[] lst) {
        return Optional.ofNullable(nextSmallest(Arrays.asList(lst)));
    }
    public static Optional<Long> nextSmallest(List<Long> lst) {
        return Optional.ofNullable(nextSmallest(lst.toArray()));
    }
    public static Optional<Long> nextSmallest(int[] lst) {
        return Optional.ofNullable(nextSmallest(Arrays.asList(lst)));
    }
    public static Optional<Long> nextSmallest(List<Integer> lst) {
        return Optional.ofNullable(nextSmallest(lst.toArray()));
    }
    public static Optional<Long> nextSmallest(long[] lst) {
        return Optional.ofNullable(nextSmallest(Arrays.asList(lst)));
    }
    public static Optional<Long> nextSmallest(int[] lst) {
        return Optional.ofNullable(nextSmallest(Arrays.asList(lst)));
    }
    public static Optional<Long> nextSmallest(List<Long> lst) {
        return Optional.ofNullable(nextSmallest(lst.toArray()));
    }
    public static Optional<Long> nextSmallest(long[] lst) {
        return Optional.ofNullable(nextSmallest(Arrays.asList(lst)));
    }
    public static Optional<Long> nextSmallest(int[] lst) {
        return Optional.ofNullable(nextSmallest(Arrays.asList(lst)));
    }
    public static Optional<Long> nextSmallest(List<Integer> lst) {

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
