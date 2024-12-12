import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> incrList(ArrayList<Long> l) {
        ArrayList<Long> r = new ArrayList<>();
        for (int i = 0; i < l.size(); i++) {
            r.add(l.get(i) + 1);
        }
        return r;
    }
    public static void main(String[] args) {
    assert(incrList((new ArrayList<Long>(Arrays.asList()))).equals((new ArrayList<Long>(Arrays.asList()))));
    assert(incrList((new ArrayList<Long>(Arrays.asList((long)3l, (long)2l, (long)1l)))).equals((new ArrayList<Long>(Arrays.asList((long)4l, (long)3l, (long)2l)))));
    assert(incrList((new ArrayList<Long>(Arrays.asList((long)5l, (long)2l, (long)5l, (long)2l, (long)3l, (long)3l, (long)9l, (long)0l, (long)123l)))).equals((new ArrayList<Long>(Arrays.asList((long)6l, (long)3l, (long)6l, (long)3l, (long)4l, (long)4l, (long)10l, (long)1l, (long)124l)))));
    }

}