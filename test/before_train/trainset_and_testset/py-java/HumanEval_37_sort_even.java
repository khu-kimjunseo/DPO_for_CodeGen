import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> sortEven(ArrayList<Long> l) {
        ArrayList<Long> ans = new ArrayList<>();
        for (int i = 0; i < l.size(); i++) {
            if (l.get(i) % 2 == 0) {
                ans.add(l.get(i));
            }
        }
        return ans;
    }
    public static void main(String[] args) {
    assert(sortEven((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l)))).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l)))));
    assert(sortEven((new ArrayList<Long>(Arrays.asList((long)5l, (long)3l, (long)-5l, (long)2l, (long)-3l, (long)3l, (long)9l, (long)0l, (long)123l, (long)1l, (long)-10l)))).equals((new ArrayList<Long>(Arrays.asList((long)-10l, (long)3l, (long)-5l, (long)2l, (long)-3l, (long)3l, (long)5l, (long)0l, (long)9l, (long)1l, (long)123l)))));
    assert(sortEven((new ArrayList<Long>(Arrays.asList((long)5l, (long)8l, (long)-12l, (long)4l, (long)23l, (long)2l, (long)3l, (long)11l, (long)12l, (long)-10l)))).equals((new ArrayList<Long>(Arrays.asList((long)-12l, (long)8l, (long)3l, (long)4l, (long)5l, (long)2l, (long)12l, (long)11l, (long)23l, (long)-10l)))));
    }

}
