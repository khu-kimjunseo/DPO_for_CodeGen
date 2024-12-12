import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long add(ArrayList<Long> lst) {
        return IntStream.range(1, lst.size()).filter(i -> i % 2 != 0 && lst.get(i) % 2 == 0).mapToLong(i -> lst.get(i)).sum();
    }
    public static void main(String[] args) {
    assert(add((new ArrayList<Long>(Arrays.asList((long)4l, (long)88l)))) == (88l));
    assert(add((new ArrayList<Long>(Arrays.asList((long)4l, (long)5l, (long)6l, (long)7l, (long)2l, (long)122l)))) == (122l));
    assert(add((new ArrayList<Long>(Arrays.asList((long)4l, (long)0l, (long)6l, (long)7l)))) == (0l));
    assert(add((new ArrayList<Long>(Arrays.asList((long)4l, (long)4l, (long)6l, (long)8l)))) == (12l));
    }

}
