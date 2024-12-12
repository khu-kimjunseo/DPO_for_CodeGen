import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> f(long n) {
        ArrayList<Long> ret = new ArrayList<>();
        for (long i = 1; i <= n; i++) {
            ret.add(i);
        }
        return ret;
    }
    public static void main(String[] args) {
    assert(f((5l)).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)6l, (long)24l, (long)15l)))));
    assert(f((7l)).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)6l, (long)24l, (long)15l, (long)720l, (long)28l)))));
    assert(f((1l)).equals((new ArrayList<Long>(Arrays.asList((long)1l)))));
    assert(f((3l)).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)6l)))));
    }

}
