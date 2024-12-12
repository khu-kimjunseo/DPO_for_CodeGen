import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> makeAPile(long n) {
        return IntStream.range(0, (int) n).mapToObj(i -> n + 2 * i).collect(Collectors.toCollection(ArrayList::new));
    }
    public static void main(String[] args) {
    assert(makeAPile((3l)).equals((new ArrayList<Long>(Arrays.asList((long)3l, (long)5l, (long)7l)))));
    assert(makeAPile((4l)).equals((new ArrayList<Long>(Arrays.asList((long)4l, (long)6l, (long)8l, (long)10l)))));
    assert(makeAPile((5l)).equals((new ArrayList<Long>(Arrays.asList((long)5l, (long)7l, (long)9l, (long)11l, (long)13l)))));
    assert(makeAPile((6l)).equals((new ArrayList<Long>(Arrays.asList((long)6l, (long)8l, (long)10l, (long)12l, (long)14l, (long)16l)))));
    assert(makeAPile((8l)).equals((new ArrayList<Long>(Arrays.asList((long)8l, (long)10l, (long)12l, (long)14l, (long)16l, (long)18l, (long)20l, (long)22l)))));
    }

}
