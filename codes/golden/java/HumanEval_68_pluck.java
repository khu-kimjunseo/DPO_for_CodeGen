import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> pluck(ArrayList<Long> arr) {
        if (arr.size() == 0) return new ArrayList<Long>();
        List<Long> evens = arr.stream().filter(x -> x % 2 == 0).collect(Collectors.toList());
        if (evens.size() == 0) return new ArrayList<Long>();
        long min = Collections.min(evens);
        return new ArrayList<Long>(Arrays.asList(min, (long) arr.indexOf(min)));
    }
    public static void main(String[] args) {
    assert(pluck((new ArrayList<Long>(Arrays.asList((long)4l, (long)2l, (long)3l)))).equals((new ArrayList<Long>(Arrays.asList((long)2l, (long)1l)))));
    assert(pluck((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l)))).equals((new ArrayList<Long>(Arrays.asList((long)2l, (long)1l)))));
    assert(pluck((new ArrayList<Long>(Arrays.asList()))).equals((new ArrayList<Long>(Arrays.asList()))));
    assert(pluck((new ArrayList<Long>(Arrays.asList((long)5l, (long)0l, (long)3l, (long)0l, (long)4l, (long)2l)))).equals((new ArrayList<Long>(Arrays.asList((long)0l, (long)1l)))));
    assert(pluck((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l, (long)0l, (long)5l, (long)3l)))).equals((new ArrayList<Long>(Arrays.asList((long)0l, (long)3l)))));
    assert(pluck((new ArrayList<Long>(Arrays.asList((long)5l, (long)4l, (long)8l, (long)4l, (long)8l)))).equals((new ArrayList<Long>(Arrays.asList((long)4l, (long)1l)))));
    assert(pluck((new ArrayList<Long>(Arrays.asList((long)7l, (long)6l, (long)7l, (long)1l)))).equals((new ArrayList<Long>(Arrays.asList((long)6l, (long)1l)))));
    assert(pluck((new ArrayList<Long>(Arrays.asList((long)7l, (long)9l, (long)7l, (long)1l)))).equals((new ArrayList<Long>(Arrays.asList()))));
    }

}
