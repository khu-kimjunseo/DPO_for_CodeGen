import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> common(ArrayList<Long> l1, ArrayList<Long> l2) {
        ArrayList<Long> ret = new ArrayList<>();
        for (long e1 : l1) {
            for (long e2 : l2) {
                if (e1 == e2) {
                    ret.add(e1);
                }
            }
        }
        return ret;
    }
    public static void main(String[] args) {
    assert(common((new ArrayList<Long>(Arrays.asList((long)1l, (long)4l, (long)3l, (long)34l, (long)653l, (long)2l, (long)5l))), (new ArrayList<Long>(Arrays.asList((long)5l, (long)7l, (long)1l, (long)5l, (long)9l, (long)653l, (long)121l)))).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)5l, (long)653l)))));
    assert(common((new ArrayList<Long>(Arrays.asList((long)5l, (long)3l, (long)2l, (long)8l))), (new ArrayList<Long>(Arrays.asList((long)3l, (long)2l)))).equals((new ArrayList<Long>(Arrays.asList((long)2l, (long)3l)))));
    assert(common((new ArrayList<Long>(Arrays.asList((long)4l, (long)3l, (long)2l, (long)8l))), (new ArrayList<Long>(Arrays.asList((long)3l, (long)2l, (long)4l)))).equals((new ArrayList<Long>(Arrays.asList((long)2l, (long)3l, (long)4l)))));
    assert(common((new ArrayList<Long>(Arrays.asList((long)4l, (long)3l, (long)2l, (long)8l))), (new ArrayList<Long>(Arrays.asList()))).equals((new ArrayList<Long>(Arrays.asList()))));
    }

}
