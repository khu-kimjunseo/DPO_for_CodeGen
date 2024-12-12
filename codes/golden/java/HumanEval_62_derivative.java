import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> derivative(ArrayList<Long> xs) {
        return IntStream.range(1, xs.size()).mapToObj(i -> i * xs.get(i)).collect(Collectors.toCollection(ArrayList::new));
    }
    public static void main(String[] args) {
    assert(derivative((new ArrayList<Long>(Arrays.asList((long)3l, (long)1l, (long)2l, (long)4l, (long)5l)))).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)4l, (long)12l, (long)20l)))));
    assert(derivative((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l)))).equals((new ArrayList<Long>(Arrays.asList((long)2l, (long)6l)))));
    assert(derivative((new ArrayList<Long>(Arrays.asList((long)3l, (long)2l, (long)1l)))).equals((new ArrayList<Long>(Arrays.asList((long)2l, (long)2l)))));
    assert(derivative((new ArrayList<Long>(Arrays.asList((long)3l, (long)2l, (long)1l, (long)0l, (long)4l)))).equals((new ArrayList<Long>(Arrays.asList((long)2l, (long)2l, (long)0l, (long)16l)))));
    assert(derivative((new ArrayList<Long>(Arrays.asList((long)1l)))).equals((new ArrayList<Long>(Arrays.asList()))));
    }

}
