import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> tri(long n) {
        if (n == 0) {
            return new ArrayList<Long>(Arrays.asList(1L));
        }
        ArrayList<Long> my_tri = new ArrayList<Long>(Arrays.asList(1L, 3L));
        for (int i = 2; i <= n; i++) {
            long term = i % 2 == 0 ? i / 2 + 1 : my_tri.get(i - 1) + my_tri.get(i - 2) + (i + 3) / 2;
            my_tri.add(term);
        }
        return my_tri;
    }
    public static void main(String[] args) {
    assert(tri((3l)).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)3l, (long)2l, (long)8l)))));
    assert(tri((4l)).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)3l, (long)2l, (long)8l, (long)3l)))));
    assert(tri((5l)).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)3l, (long)2l, (long)8l, (long)3l, (long)15l)))));
    assert(tri((6l)).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)3l, (long)2l, (long)8l, (long)3l, (long)15l, (long)4l)))));
    assert(tri((7l)).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)3l, (long)2l, (long)8l, (long)3l, (long)15l, (long)4l, (long)24l)))));
    assert(tri((8l)).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)3l, (long)2l, (long)8l, (long)3l, (long)15l, (long)4l, (long)24l, (long)5l)))));
    assert(tri((9l)).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)3l, (long)2l, (long)8l, (long)3l, (long)15l, (long)4l, (long)24l, (long)5l, (long)35l)))));
    assert(tri((20l)).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)3l, (long)2l, (long)8l, (long)3l, (long)15l, (long)4l, (long)24l, (long)5l, (long)35l, (long)6l, (long)48l, (long)7l, (long)63l, (long)8l, (long)80l, (long)9l, (long)99l, (long)10l, (long)120l, (long)11l)))));
    assert(tri((0l)).equals((new ArrayList<Long>(Arrays.asList((long)1l)))));
    assert(tri((1l)).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)3l)))));
    }

}
